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



#include <ATen/ops/rad2deg_ops.h>

namespace at {


// aten::rad2deg(Tensor self) -> Tensor
inline at::Tensor rad2deg(const at::Tensor & self) {
    return at::_ops::rad2deg::call(self);
}

// aten::rad2deg_(Tensor(a!) self) -> Tensor(a!)
inline at::Tensor & rad2deg_(at::Tensor & self) {
    return at::_ops::rad2deg_::call(self);
}

// aten::rad2deg.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & rad2deg_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::rad2deg_out::call(self, out);
}
// aten::rad2deg.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & rad2deg_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::rad2deg_out::call(self, out);
}

}
