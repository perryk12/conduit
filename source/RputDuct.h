#pragma once

#include "mpi.h"

#include <algorithm>
#include <array>

#include "base/assert.h"
#include "tools/string_utils.h"

#include "RDMAWindow.h"
#include "CircularIndex.h"
#include "identity.h"

#include "config_utils.h"
#include "mpi_utils.h"
#include "print_utils.h"

template<typename T, size_t N>
class Duct;

// TODO rename RputDuct
template<typename T, size_t N=DEFAULT_BUFFER>
class RputDuct {

  friend Duct<T, N>;

  using pending_t = size_t;
  using buffer_t = std::array<T, N>;
  using index_t = CircularIndex<N>;

  //TODO fix all these damn mutables
  mutable pending_t pending{0};
  mutable buffer_t buffer;
  //TODO do we need a buffer if we're just overwriting on the other end?

  mutable std::array<MPI_Request, N> send_requests;
#ifndef NDEBUG
  // most vexing parse :/
  mutable std::vector<char> request_states=std::vector<char>(N, false);
#endif

  MPI_Comm comm;

  const int outlet_proc;
  int target_offset;

  mutable index_t send_position{0};

  void RequestSend() const {
    // TODO handle more than one at a time
    emp_assert(
      request_states[send_position] == false,
      send_position,
      pending,
      format_member("*this", *this)
    );
    verify(MPI_Win_lock(
      MPI_LOCK_EXCLUSIVE, // int lock_type
      // Indicates whether other processes may access the target window at the /
      // same time (if MPI_LOCK_SHARED) or not (MPI_LOCK_EXCLUSIVE)
      outlet_proc, // int rank
      // rank of locked window (nonnegative integer)
      0, // int assert TODO optimize?
      // Used to optimize this call; zero may be used as a default.
      RDMAWindow::GetWindow()// MPI_Win win
      // window object (handle)
    ));
    verify(MPI_Rput(
      &buffer[send_position], // const void *origin_addr
      sizeof(T), // int origin_count
      MPI_BYTE, // MPI_Datatype origin_datatype
      outlet_proc, // int target_rank
      target_offset, // MPI_Aint target_disp
      // with MPI_Recv?, TODO factor in send_position offset?
      sizeof(T), // int target_count
      MPI_BYTE, // MPI_Datatype target_datatype
      RDMAWindow::GetWindow(), //
      &send_requests[send_position] // RMA request (handle)
    ));
    verify(MPI_Win_unlock(
      outlet_proc, // int rank
      // rank of window (nonnegative integer)
      RDMAWindow::GetWindow() // MPI_Win win
      // window object (handle)
    ));

#ifndef NDEBUG
    request_states[send_position] = true;
#endif
    ++pending;
    ++send_position;

  }

  // AcceptSend Take
  bool ConfirmSend() const {

    int flag{};

    emp_assert(
      request_states[send_position - pending],
      send_position,
      pending,
      format_member("*this", *this)
    );
    verify(MPI_Test(
      &send_requests[send_position - pending],
      &flag,
      MPI_STATUS_IGNORE
    ));
#ifndef NDEBUG
    if (flag) request_states[send_position] = false;
#endif

    if (flag) --pending;

    return flag;

  }

public:

  // TODO check if is inlet proc
  RputDuct(
    const int inlet_proc,
    const int outlet_proc_=MPI_ANY_SOURCE,
    const int tag_=0,
    MPI_Comm comm_=MPI_COMM_WORLD
  ) : comm(comm_)
  , outlet_proc(outlet_proc_) {
    if (get_rank() == inlet_proc) {
      // TODO make this nonblocking and add an emp_assert
      // to make sure it actually completed
      verify(MPI_Recv(
        &target_offset, // void *buf
        1, // int count
        MPI_INT, // MPI_Datatype datatype
        outlet_proc, // int source
        tag_, // int tag
        comm, // MPI_Comm comm
        MPI_STATUS_IGNORE // MPI_Status * status
      ));
    }

    emp_assert(
      true,
      std::none_of(
        std::begin(request_states),
        std::end(request_states),
        identity
      ),
      [](){ error_message_mutex.lock(); return "locked"; }(),
      format_member("*this", *this)
    );

  }

  //todo rename
  void Push() {

    emp_assert(
      pending < N,
      [](){ error_message_mutex.lock(); return "locked"; }(),
      emp::to_string("pending: ", pending)
    );

    RequestSend();

  }

  void Initialize(const size_t write_position) {
    send_position = write_position;
  }

  //todo rename
  [[noreturn]] void Pop(const size_t count) {
    throw "bad Pop on RputDuct";
  }

  [[noreturn]] size_t GetPending() const {
    throw "bad GetPending on RputDuct";
  }

  size_t GetAvailableCapacity() const {
    while (pending && ConfirmSend());
    return N - pending;
  }

  T GetElement(const size_t n) const { return buffer[n]; }

  const void * GetPosition(const size_t n) const { return &buffer[n]; }

  void SetElement(const size_t n, const T & val) { buffer[n] = val; }

  std::string GetType() const { return "RputDuct"; }

  std::string ToString() const {
    std::stringstream ss;
    ss << GetType() << std::endl;
    ss << format_member("this", static_cast<const void *>(this)) << std::endl;
    ss << format_member("buffer_t buffer", buffer[0]) << std::endl;
    ss << format_member("pending_t pending", (size_t) pending) << std::endl;
    ss << format_member(
      "MPI_Comm comm",
      [this](){
        int len;
        char data[MPI_MAX_OBJECT_NAME];
        // TODO at least log/warn error codes
        verify(MPI_Comm_get_name(comm, data, &len));
        return std::string{}.assign(data, len);
      }()
    ) << std::endl;
    ss << format_member("get_rank()", get_rank()) << std::endl;
    ss << format_member("int outlet_proc", outlet_proc) << std::endl;
    ss << format_member("size_t send_position", send_position);
    return ss.str();
  }

};