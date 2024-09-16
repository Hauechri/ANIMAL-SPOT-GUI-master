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



#include <ATen/ops/_mps_convolution_transpose_ops.h>

namespace at {


// aten::_mps_convolution_transpose(Tensor self, Tensor weight, int[] padding, int[] output_padding, int[] stride, int[] dilation, int groups) -> Tensor
inline at::Tensor _mps_convolution_transpose(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups) {
    return at::_ops::_mps_convolution_transpose::call(self, weight, padding, output_padding, stride, dilation, groups);
}

// aten::_mps_convolution_transpose.out(Tensor self, Tensor weight, int[] padding, int[] output_padding, int[] stride, int[] dilation, int groups, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _mps_convolution_transpose_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups) {
    return at::_ops::_mps_convolution_transpose_out::call(self, weight, padding, output_padding, stride, dilation, groups, out);
}
// aten::_mps_convolution_transpose.out(Tensor self, Tensor weight, int[] padding, int[] output_padding, int[] stride, int[] dilation, int groups, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _mps_convolution_transpose_outf(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, at::Tensor & out) {
    return at::_ops::_mps_convolution_transpose_out::call(self, weight, padding, output_padding, stride, dilation, groups, out);
}

}