#pragma once

#include <utility>

#include <mpi.h>

#include "mpi_audit.hpp"

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Abort(Args&&... args) {
  uit::mpi_audit(
    MPI_Abort(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Accumulate(Args&&... args) {
  uit::mpi_audit(
    MPI_Accumulate(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Add_error_class(Args&&... args) {
  uit::mpi_audit(
    MPI_Add_error_class(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Add_error_code(Args&&... args) {
  uit::mpi_audit(
    MPI_Add_error_code(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Add_error_string(Args&&... args) {
  uit::mpi_audit(
    MPI_Add_error_string(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Address(Args&&... args) {
  uit::mpi_audit(
    MPI_Address(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Allgather(Args&&... args) {
  uit::mpi_audit(
    MPI_Allgather(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Allgatherv(Args&&... args) {
  uit::mpi_audit(
    MPI_Allgatherv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Alloc_mem(Args&&... args) {
  uit::mpi_audit(
    MPI_Alloc_mem(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Allreduce(Args&&... args) {
  uit::mpi_audit(
    MPI_Allreduce(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Alltoall(Args&&... args) {
  uit::mpi_audit(
    MPI_Alltoall(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Alltoallv(Args&&... args) {
  uit::mpi_audit(
    MPI_Alltoallv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Alltoallw(Args&&... args) {
  uit::mpi_audit(
    MPI_Alltoallw(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Attr_delete(Args&&... args) {
  uit::mpi_audit(
    MPI_Attr_delete(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Attr_get(Args&&... args) {
  uit::mpi_audit(
    MPI_Attr_get(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Attr_put(Args&&... args) {
  uit::mpi_audit(
    MPI_Attr_put(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Barrier(Args&&... args) {
  uit::mpi_audit(
    MPI_Barrier(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Bcast(Args&&... args) {
  uit::mpi_audit(
    MPI_Bcast(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Bsend(Args&&... args) {
  uit::mpi_audit(
    MPI_Bsend(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Bsend_init(Args&&... args) {
  uit::mpi_audit(
    MPI_Bsend_init(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Buffer_attach(Args&&... args) {
  uit::mpi_audit(
    MPI_Buffer_attach(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Buffer_detach(Args&&... args) {
  uit::mpi_audit(
    MPI_Buffer_detach(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Cancel(Args&&... args) {
  uit::mpi_audit(
    MPI_Cancel(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Cart_coords(Args&&... args) {
  uit::mpi_audit(
    MPI_Cart_coords(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Cart_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Cart_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Cart_get(Args&&... args) {
  uit::mpi_audit(
    MPI_Cart_get(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Cart_map(Args&&... args) {
  uit::mpi_audit(
    MPI_Cart_map(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Cart_rank(Args&&... args) {
  uit::mpi_audit(
    MPI_Cart_rank(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Cart_shift(Args&&... args) {
  uit::mpi_audit(
    MPI_Cart_shift(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Cart_sub(Args&&... args) {
  uit::mpi_audit(
    MPI_Cart_sub(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Cartdim_get(Args&&... args) {
  uit::mpi_audit(
    MPI_Cartdim_get(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Close_port(Args&&... args) {
  uit::mpi_audit(
    MPI_Close_port(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_accept(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_accept(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_call_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_call_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_compare(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_compare(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_connect(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_connect(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_create_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_create_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_create_group(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_create_group(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_create_keyval(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_create_keyval(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_delete_attr(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_delete_attr(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_disconnect(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_disconnect(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_dup(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_dup(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_dup_with_info(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_dup_with_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_free(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_free_keyval(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_free_keyval(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_get_attr(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_get_attr(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_get_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_get_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_get_info(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_get_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_get_name(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_get_name(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_get_parent(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_get_parent(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_group(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_group(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_idup(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_idup(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_join(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_join(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_rank(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_rank(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_remote_group(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_remote_group(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_remote_size(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_remote_size(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_set_attr(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_set_attr(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_set_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_set_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_set_info(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_set_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_set_name(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_set_name(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_size(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_size(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_spawn(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_spawn(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_spawn_multiple(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_spawn_multiple(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_split(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_split(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_split_type(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_split_type(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Comm_test_inter(Args&&... args) {
  uit::mpi_audit(
    MPI_Comm_test_inter(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Compare_and_swap(Args&&... args) {
  uit::mpi_audit(
    MPI_Compare_and_swap(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Dims_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Dims_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Dist_graph_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Dist_graph_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Dist_graph_create_adjacent(Args&&... args) {
  uit::mpi_audit(
    MPI_Dist_graph_create_adjacent(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Dist_graph_neighbors(Args&&... args) {
  uit::mpi_audit(
    MPI_Dist_graph_neighbors(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Dist_graph_neighbors_count(Args&&... args) {
  uit::mpi_audit(
    MPI_Dist_graph_neighbors_count(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Errhandler_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Errhandler_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Errhandler_free(Args&&... args) {
  uit::mpi_audit(
    MPI_Errhandler_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Errhandler_get(Args&&... args) {
  uit::mpi_audit(
    MPI_Errhandler_get(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Errhandler_set(Args&&... args) {
  uit::mpi_audit(
    MPI_Errhandler_set(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Error_class(Args&&... args) {
  uit::mpi_audit(
    MPI_Error_class(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Error_string(Args&&... args) {
  uit::mpi_audit(
    MPI_Error_string(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Exscan(Args&&... args) {
  uit::mpi_audit(
    MPI_Exscan(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Fetch_and_op(Args&&... args) {
  uit::mpi_audit(
    MPI_Fetch_and_op(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_c2f(Args&&... args) {
  uit::mpi_audit(
    MPI_File_c2f(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_call_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_File_call_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_close(Args&&... args) {
  uit::mpi_audit(
    MPI_File_close(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_create_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_File_create_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_delete(Args&&... args) {
  uit::mpi_audit(
    MPI_File_delete(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_f2c(Args&&... args) {
  uit::mpi_audit(
    MPI_File_f2c(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_amode(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_amode(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_atomicity(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_atomicity(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_byte_offset(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_byte_offset(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_group(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_group(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_info(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_position(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_position(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_position_shared(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_position_shared(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_size(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_size(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_type_extent(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_type_extent(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_get_view(Args&&... args) {
  uit::mpi_audit(
    MPI_File_get_view(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_iread(Args&&... args) {
  uit::mpi_audit(
    MPI_File_iread(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_iread_all(Args&&... args) {
  uit::mpi_audit(
    MPI_File_iread_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_iread_at(Args&&... args) {
  uit::mpi_audit(
    MPI_File_iread_at(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_iread_at_all(Args&&... args) {
  uit::mpi_audit(
    MPI_File_iread_at_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_iread_shared(Args&&... args) {
  uit::mpi_audit(
    MPI_File_iread_shared(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_iwrite(Args&&... args) {
  uit::mpi_audit(
    MPI_File_iwrite(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_iwrite_all(Args&&... args) {
  uit::mpi_audit(
    MPI_File_iwrite_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_iwrite_at(Args&&... args) {
  uit::mpi_audit(
    MPI_File_iwrite_at(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_iwrite_at_all(Args&&... args) {
  uit::mpi_audit(
    MPI_File_iwrite_at_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_iwrite_shared(Args&&... args) {
  uit::mpi_audit(
    MPI_File_iwrite_shared(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_open(Args&&... args) {
  uit::mpi_audit(
    MPI_File_open(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_preallocate(Args&&... args) {
  uit::mpi_audit(
    MPI_File_preallocate(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_all(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_all_begin(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_all_begin(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_all_end(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_all_end(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_at(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_at(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_at_all(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_at_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_at_all_begin(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_at_all_begin(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_at_all_end(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_at_all_end(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_ordered(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_ordered(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_ordered_begin(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_ordered_begin(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_ordered_end(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_ordered_end(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_read_shared(Args&&... args) {
  uit::mpi_audit(
    MPI_File_read_shared(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_seek(Args&&... args) {
  uit::mpi_audit(
    MPI_File_seek(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_seek_shared(Args&&... args) {
  uit::mpi_audit(
    MPI_File_seek_shared(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_set_atomicity(Args&&... args) {
  uit::mpi_audit(
    MPI_File_set_atomicity(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_set_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_File_set_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_set_info(Args&&... args) {
  uit::mpi_audit(
    MPI_File_set_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_set_size(Args&&... args) {
  uit::mpi_audit(
    MPI_File_set_size(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_set_view(Args&&... args) {
  uit::mpi_audit(
    MPI_File_set_view(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_sync(Args&&... args) {
  uit::mpi_audit(
    MPI_File_sync(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_all(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_all_begin(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_all_begin(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_all_end(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_all_end(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_at(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_at(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_at_all(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_at_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_at_all_begin(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_at_all_begin(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_at_all_end(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_at_all_end(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_ordered(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_ordered(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_ordered_begin(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_ordered_begin(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_ordered_end(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_ordered_end(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_File_write_shared(Args&&... args) {
  uit::mpi_audit(
    MPI_File_write_shared(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Finalize(Args&&... args) {
  uit::mpi_audit(
    MPI_Finalize(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Finalized(Args&&... args) {
  uit::mpi_audit(
    MPI_Finalized(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Free_mem(Args&&... args) {
  uit::mpi_audit(
    MPI_Free_mem(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Gather(Args&&... args) {
  uit::mpi_audit(
    MPI_Gather(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Gatherv(Args&&... args) {
  uit::mpi_audit(
    MPI_Gatherv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Get(Args&&... args) {
  uit::mpi_audit(
    MPI_Get(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Get_accumulate(Args&&... args) {
  uit::mpi_audit(
    MPI_Get_accumulate(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Get_address(Args&&... args) {
  uit::mpi_audit(
    MPI_Get_address(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Get_count(Args&&... args) {
  uit::mpi_audit(
    MPI_Get_count(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Get_elements(Args&&... args) {
  uit::mpi_audit(
    MPI_Get_elements(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Get_elements_x(Args&&... args) {
  uit::mpi_audit(
    MPI_Get_elements_x(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Get_library_version(Args&&... args) {
  uit::mpi_audit(
    MPI_Get_library_version(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Get_processor_name(Args&&... args) {
  uit::mpi_audit(
    MPI_Get_processor_name(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Get_version(Args&&... args) {
  uit::mpi_audit(
    MPI_Get_version(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Graph_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Graph_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Graph_get(Args&&... args) {
  uit::mpi_audit(
    MPI_Graph_get(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Graph_map(Args&&... args) {
  uit::mpi_audit(
    MPI_Graph_map(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Graph_neighbors(Args&&... args) {
  uit::mpi_audit(
    MPI_Graph_neighbors(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Graph_neighbors_count(Args&&... args) {
  uit::mpi_audit(
    MPI_Graph_neighbors_count(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Graphdims_get(Args&&... args) {
  uit::mpi_audit(
    MPI_Graphdims_get(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Grequest_complete(Args&&... args) {
  uit::mpi_audit(
    MPI_Grequest_complete(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Grequest_start(Args&&... args) {
  uit::mpi_audit(
    MPI_Grequest_start(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_compare(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_compare(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_difference(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_difference(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_excl(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_excl(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_free(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_incl(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_incl(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_intersection(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_intersection(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_range_excl(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_range_excl(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_range_incl(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_range_incl(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_rank(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_rank(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_size(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_size(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_translate_ranks(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_translate_ranks(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Group_union(Args&&... args) {
  uit::mpi_audit(
    MPI_Group_union(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Iallgather(Args&&... args) {
  uit::mpi_audit(
    MPI_Iallgather(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Iallgatherv(Args&&... args) {
  uit::mpi_audit(
    MPI_Iallgatherv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Iallreduce(Args&&... args) {
  uit::mpi_audit(
    MPI_Iallreduce(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ialltoall(Args&&... args) {
  uit::mpi_audit(
    MPI_Ialltoall(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ialltoallv(Args&&... args) {
  uit::mpi_audit(
    MPI_Ialltoallv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ialltoallw(Args&&... args) {
  uit::mpi_audit(
    MPI_Ialltoallw(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ibarrier(Args&&... args) {
  uit::mpi_audit(
    MPI_Ibarrier(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ibcast(Args&&... args) {
  uit::mpi_audit(
    MPI_Ibcast(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ibsend(Args&&... args) {
  uit::mpi_audit(
    MPI_Ibsend(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Iexscan(Args&&... args) {
  uit::mpi_audit(
    MPI_Iexscan(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Igather(Args&&... args) {
  uit::mpi_audit(
    MPI_Igather(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Igatherv(Args&&... args) {
  uit::mpi_audit(
    MPI_Igatherv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Improbe(Args&&... args) {
  uit::mpi_audit(
    MPI_Improbe(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Imrecv(Args&&... args) {
  uit::mpi_audit(
    MPI_Imrecv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ineighbor_allgather(Args&&... args) {
  uit::mpi_audit(
    MPI_Ineighbor_allgather(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ineighbor_allgatherv(Args&&... args) {
  uit::mpi_audit(
    MPI_Ineighbor_allgatherv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ineighbor_alltoall(Args&&... args) {
  uit::mpi_audit(
    MPI_Ineighbor_alltoall(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ineighbor_alltoallv(Args&&... args) {
  uit::mpi_audit(
    MPI_Ineighbor_alltoallv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ineighbor_alltoallw(Args&&... args) {
  uit::mpi_audit(
    MPI_Ineighbor_alltoallw(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Info_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Info_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Info_delete(Args&&... args) {
  uit::mpi_audit(
    MPI_Info_delete(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Info_dup(Args&&... args) {
  uit::mpi_audit(
    MPI_Info_dup(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Info_free(Args&&... args) {
  uit::mpi_audit(
    MPI_Info_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Info_get(Args&&... args) {
  uit::mpi_audit(
    MPI_Info_get(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Info_get_nkeys(Args&&... args) {
  uit::mpi_audit(
    MPI_Info_get_nkeys(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Info_get_nthkey(Args&&... args) {
  uit::mpi_audit(
    MPI_Info_get_nthkey(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Info_get_valuelen(Args&&... args) {
  uit::mpi_audit(
    MPI_Info_get_valuelen(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Info_set(Args&&... args) {
  uit::mpi_audit(
    MPI_Info_set(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Init(Args&&... args) {
  uit::mpi_audit(
    MPI_Init(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Init_thread(Args&&... args) {
  uit::mpi_audit(
    MPI_Init_thread(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Initialized(Args&&... args) {
  uit::mpi_audit(
    MPI_Initialized(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Intercomm_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Intercomm_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Intercomm_merge(Args&&... args) {
  uit::mpi_audit(
    MPI_Intercomm_merge(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Iprobe(Args&&... args) {
  uit::mpi_audit(
    MPI_Iprobe(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Irecv(Args&&... args) {
  uit::mpi_audit(
    MPI_Irecv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ireduce(Args&&... args) {
  uit::mpi_audit(
    MPI_Ireduce(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ireduce_scatter(Args&&... args) {
  uit::mpi_audit(
    MPI_Ireduce_scatter(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ireduce_scatter_block(Args&&... args) {
  uit::mpi_audit(
    MPI_Ireduce_scatter_block(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Irsend(Args&&... args) {
  uit::mpi_audit(
    MPI_Irsend(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Is_thread_main(Args&&... args) {
  uit::mpi_audit(
    MPI_Is_thread_main(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Iscan(Args&&... args) {
  uit::mpi_audit(
    MPI_Iscan(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Iscatter(Args&&... args) {
  uit::mpi_audit(
    MPI_Iscatter(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Iscatterv(Args&&... args) {
  uit::mpi_audit(
    MPI_Iscatterv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Isend(Args&&... args) {
  uit::mpi_audit(
    MPI_Isend(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Issend(Args&&... args) {
  uit::mpi_audit(
    MPI_Issend(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Keyval_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Keyval_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Keyval_free(Args&&... args) {
  uit::mpi_audit(
    MPI_Keyval_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Lookup_name(Args&&... args) {
  uit::mpi_audit(
    MPI_Lookup_name(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Mprobe(Args&&... args) {
  uit::mpi_audit(
    MPI_Mprobe(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Mrecv(Args&&... args) {
  uit::mpi_audit(
    MPI_Mrecv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Neighbor_allgather(Args&&... args) {
  uit::mpi_audit(
    MPI_Neighbor_allgather(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Neighbor_allgatherv(Args&&... args) {
  uit::mpi_audit(
    MPI_Neighbor_allgatherv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Neighbor_alltoall(Args&&... args) {
  uit::mpi_audit(
    MPI_Neighbor_alltoall(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Neighbor_alltoallv(Args&&... args) {
  uit::mpi_audit(
    MPI_Neighbor_alltoallv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Neighbor_alltoallw(Args&&... args) {
  uit::mpi_audit(
    MPI_Neighbor_alltoallw(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Op_commute(Args&&... args) {
  uit::mpi_audit(
    MPI_Op_commute(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Op_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Op_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Op_free(Args&&... args) {
  uit::mpi_audit(
    MPI_Op_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Open_port(Args&&... args) {
  uit::mpi_audit(
    MPI_Open_port(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Pack(Args&&... args) {
  uit::mpi_audit(
    MPI_Pack(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Pack_external(Args&&... args) {
  uit::mpi_audit(
    MPI_Pack_external(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Pack_external_size(Args&&... args) {
  uit::mpi_audit(
    MPI_Pack_external_size(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Pack_size(Args&&... args) {
  uit::mpi_audit(
    MPI_Pack_size(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Pcontrol(Args&&... args) {
  uit::mpi_audit(
    MPI_Pcontrol(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Probe(Args&&... args) {
  uit::mpi_audit(
    MPI_Probe(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Publish_name(Args&&... args) {
  uit::mpi_audit(
    MPI_Publish_name(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Put(Args&&... args) {
  uit::mpi_audit(
    MPI_Put(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Query_thread(Args&&... args) {
  uit::mpi_audit(
    MPI_Query_thread(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Raccumulate(Args&&... args) {
  uit::mpi_audit(
    MPI_Raccumulate(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Recv(Args&&... args) {
  uit::mpi_audit(
    MPI_Recv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Recv_init(Args&&... args) {
  uit::mpi_audit(
    MPI_Recv_init(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Reduce(Args&&... args) {
  uit::mpi_audit(
    MPI_Reduce(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Reduce_local(Args&&... args) {
  uit::mpi_audit(
    MPI_Reduce_local(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Reduce_scatter(Args&&... args) {
  uit::mpi_audit(
    MPI_Reduce_scatter(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Reduce_scatter_block(Args&&... args) {
  uit::mpi_audit(
    MPI_Reduce_scatter_block(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Register_datarep(Args&&... args) {
  uit::mpi_audit(
    MPI_Register_datarep(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Request_free(Args&&... args) {
  uit::mpi_audit(
    MPI_Request_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Request_get_status(Args&&... args) {
  uit::mpi_audit(
    MPI_Request_get_status(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Rget(Args&&... args) {
  uit::mpi_audit(
    MPI_Rget(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Rget_accumulate(Args&&... args) {
  uit::mpi_audit(
    MPI_Rget_accumulate(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Rput(Args&&... args) {
  uit::mpi_audit(
    MPI_Rput(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Rsend(Args&&... args) {
  uit::mpi_audit(
    MPI_Rsend(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Rsend_init(Args&&... args) {
  uit::mpi_audit(
    MPI_Rsend_init(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Scan(Args&&... args) {
  uit::mpi_audit(
    MPI_Scan(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Scatter(Args&&... args) {
  uit::mpi_audit(
    MPI_Scatter(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Scatterv(Args&&... args) {
  uit::mpi_audit(
    MPI_Scatterv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Send(Args&&... args) {
  uit::mpi_audit(
    MPI_Send(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Send_init(Args&&... args) {
  uit::mpi_audit(
    MPI_Send_init(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Sendrecv(Args&&... args) {
  uit::mpi_audit(
    MPI_Sendrecv(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Sendrecv_replace(Args&&... args) {
  uit::mpi_audit(
    MPI_Sendrecv_replace(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ssend(Args&&... args) {
  uit::mpi_audit(
    MPI_Ssend(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Ssend_init(Args&&... args) {
  uit::mpi_audit(
    MPI_Ssend_init(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Start(Args&&... args) {
  uit::mpi_audit(
    MPI_Start(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Startall(Args&&... args) {
  uit::mpi_audit(
    MPI_Startall(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Status_set_cancelled(Args&&... args) {
  uit::mpi_audit(
    MPI_Status_set_cancelled(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Status_set_elements(Args&&... args) {
  uit::mpi_audit(
    MPI_Status_set_elements(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Status_set_elements_x(Args&&... args) {
  uit::mpi_audit(
    MPI_Status_set_elements_x(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_category_changed(Args&&... args) {
  uit::mpi_audit(
    MPI_T_category_changed(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_category_get_categories(Args&&... args) {
  uit::mpi_audit(
    MPI_T_category_get_categories(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_category_get_cvars(Args&&... args) {
  uit::mpi_audit(
    MPI_T_category_get_cvars(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_category_get_info(Args&&... args) {
  uit::mpi_audit(
    MPI_T_category_get_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_category_get_num(Args&&... args) {
  uit::mpi_audit(
    MPI_T_category_get_num(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_category_get_pvars(Args&&... args) {
  uit::mpi_audit(
    MPI_T_category_get_pvars(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_cvar_get_info(Args&&... args) {
  uit::mpi_audit(
    MPI_T_cvar_get_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_cvar_get_num(Args&&... args) {
  uit::mpi_audit(
    MPI_T_cvar_get_num(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_cvar_handle_alloc(Args&&... args) {
  uit::mpi_audit(
    MPI_T_cvar_handle_alloc(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_cvar_handle_free(Args&&... args) {
  uit::mpi_audit(
    MPI_T_cvar_handle_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_cvar_read(Args&&... args) {
  uit::mpi_audit(
    MPI_T_cvar_read(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_cvar_write(Args&&... args) {
  uit::mpi_audit(
    MPI_T_cvar_write(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_enum_get_info(Args&&... args) {
  uit::mpi_audit(
    MPI_T_enum_get_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_enum_get_item(Args&&... args) {
  uit::mpi_audit(
    MPI_T_enum_get_item(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_finalize(Args&&... args) {
  uit::mpi_audit(
    MPI_T_finalize(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_init_thread(Args&&... args) {
  uit::mpi_audit(
    MPI_T_init_thread(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_get_info(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_get_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_get_num(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_get_num(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_handle_alloc(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_handle_alloc(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_handle_free(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_handle_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_read(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_read(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_readreset(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_readreset(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_reset(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_reset(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_session_create(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_session_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_session_free(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_session_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_start(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_start(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_stop(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_stop(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_T_pvar_write(Args&&... args) {
  uit::mpi_audit(
    MPI_T_pvar_write(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Test(Args&&... args) {
  uit::mpi_audit(
    MPI_Test(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Test_cancelled(Args&&... args) {
  uit::mpi_audit(
    MPI_Test_cancelled(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Testall(Args&&... args) {
  uit::mpi_audit(
    MPI_Testall(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Testany(Args&&... args) {
  uit::mpi_audit(
    MPI_Testany(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Testsome(Args&&... args) {
  uit::mpi_audit(
    MPI_Testsome(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Topo_test(Args&&... args) {
  uit::mpi_audit(
    MPI_Topo_test(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_commit(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_commit(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_contiguous(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_contiguous(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_create_darray(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_create_darray(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_create_hindexed(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_create_hindexed(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_create_hindexed_block(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_create_hindexed_block(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_create_hvector(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_create_hvector(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_create_indexed_block(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_create_indexed_block(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_create_keyval(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_create_keyval(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_create_resized(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_create_resized(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_create_struct(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_create_struct(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_create_subarray(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_create_subarray(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_delete_attr(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_delete_attr(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_dup(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_dup(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_extent(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_extent(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_free(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_free_keyval(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_free_keyval(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_get_attr(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_get_attr(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_get_contents(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_get_contents(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_get_envelope(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_get_envelope(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_get_extent(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_get_extent(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_get_extent_x(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_get_extent_x(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_get_name(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_get_name(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_get_true_extent(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_get_true_extent(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_get_true_extent_x(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_get_true_extent_x(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_hindexed(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_hindexed(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_hvector(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_hvector(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_indexed(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_indexed(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_lb(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_lb(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_match_size(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_match_size(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_set_attr(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_set_attr(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_set_name(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_set_name(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_size(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_size(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_size_x(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_size_x(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_struct(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_struct(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_ub(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_ub(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Type_vector(Args&&... args) {
  uit::mpi_audit(
    MPI_Type_vector(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Unpack(Args&&... args) {
  uit::mpi_audit(
    MPI_Unpack(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Unpack_external(Args&&... args) {
  uit::mpi_audit(
    MPI_Unpack_external(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Unpublish_name(Args&&... args) {
  uit::mpi_audit(
    MPI_Unpublish_name(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Wait(Args&&... args) {
  uit::mpi_audit(
    MPI_Wait(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Waitall(Args&&... args) {
  uit::mpi_audit(
    MPI_Waitall(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Waitany(Args&&... args) {
  uit::mpi_audit(
    MPI_Waitany(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Waitsome(Args&&... args) {
  uit::mpi_audit(
    MPI_Waitsome(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_allocate(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_allocate(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_allocate_shared(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_allocate_shared(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_attach(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_attach(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_call_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_call_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_complete(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_complete(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_create(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_create(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_create_dynamic(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_create_dynamic(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_create_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_create_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_create_keyval(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_create_keyval(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_delete_attr(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_delete_attr(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_detach(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_detach(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_fence(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_fence(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_flush(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_flush(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_flush_all(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_flush_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_flush_local(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_flush_local(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_flush_local_all(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_flush_local_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_free(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_free(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_free_keyval(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_free_keyval(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_get_attr(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_get_attr(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_get_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_get_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_get_group(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_get_group(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_get_info(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_get_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_get_name(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_get_name(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_lock(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_lock(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_lock_all(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_lock_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_post(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_post(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_set_attr(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_set_attr(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_set_errhandler(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_set_errhandler(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_set_info(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_set_info(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_set_name(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_set_name(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_shared_query(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_shared_query(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_start(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_start(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_sync(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_sync(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_test(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_test(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_unlock(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_unlock(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_unlock_all(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_unlock_all(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UIT_Win_wait(Args&&... args) {
  uit::mpi_audit(
    MPI_Win_wait(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITR_Type_commit(Args&&... args) {
  uit::mpi_audit(
    MPIR_Type_commit(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITR_Type_contiguous(Args&&... args) {
  uit::mpi_audit(
    MPIR_Type_contiguous(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITR_Type_dup(Args&&... args) {
  uit::mpi_audit(
    MPIR_Type_dup(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITR_Type_get_contents(Args&&... args) {
  uit::mpi_audit(
    MPIR_Type_get_contents(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITR_Type_indexed(Args&&... args) {
  uit::mpi_audit(
    MPIR_Type_indexed(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITR_Type_struct(Args&&... args) {
  uit::mpi_audit(
    MPIR_Type_struct(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITR_Type_vector(Args&&... args) {
  uit::mpi_audit(
    MPIR_Type_vector(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITX_Comm_agree(Args&&... args) {
  uit::mpi_audit(
    MPIX_Comm_agree(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITX_Comm_failure_ack(Args&&... args) {
  uit::mpi_audit(
    MPIX_Comm_failure_ack(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITX_Comm_failure_get_acked(Args&&... args) {
  uit::mpi_audit(
    MPIX_Comm_failure_get_acked(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITX_Comm_revoke(Args&&... args) {
  uit::mpi_audit(
    MPIX_Comm_revoke(std::forward<Args>(args)...)
  );
}

/// Wraps corresponding MPI* call with debug-mode error code check.
template<typename... Args>
inline void UITX_Comm_shrink(Args&&... args) {
  uit::mpi_audit(
    MPIX_Comm_shrink(std::forward<Args>(args)...)
  );
}