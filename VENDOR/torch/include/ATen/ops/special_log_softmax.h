#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/special_log_softmax_ops.h>

namespace at {


// aten::special_log_softmax(Tensor self, int dim, *, ScalarType? dtype=None) -> Tensor
inline at::Tensor special_log_softmax(const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype=c10::nullopt) {
    return at::_ops::special_log_softmax::call(self, dim, dtype);
}

}
