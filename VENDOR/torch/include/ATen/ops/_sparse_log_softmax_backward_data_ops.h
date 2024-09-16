#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API _sparse_log_softmax_backward_data {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &, int64_t, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_sparse_log_softmax_backward_data")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_sparse_log_softmax_backward_data(Tensor grad_output, Tensor output, int dim, Tensor self) -> Tensor")
  static at::Tensor call(const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self);
};

struct TORCH_API _sparse_log_softmax_backward_data_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Tensor &, int64_t, const at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_sparse_log_softmax_backward_data")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_sparse_log_softmax_backward_data.out(Tensor grad_output, Tensor output, int dim, Tensor self, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self, at::Tensor & out);
};

}} // namespace at::_ops
