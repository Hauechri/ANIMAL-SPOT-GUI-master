#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunctions_inl.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

#if defined(AT_PER_OPERATOR_HEADERS) && defined(TORCH_ASSERT_ONLY_METHOD_OPERATORS)
#error This change adds a dependency on all pytorch operators, meaning the     \
  file will need to be re-compiled every time an operator is changed or added. \
  Consider including a specific operator from                                  \
  <ATen/ops/{my_operator}_compositeexplicitautograd_dispatch.h>.                   \
  See NOTE [TORCH_ASSERT_ONLY_METHOD_OPERATORS].
#endif

#include <ATen/ops/_adaptive_avg_pool2d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_adaptive_avg_pool2d_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_adaptive_avg_pool3d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_adaptive_avg_pool3d_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_add_relu_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_aminmax_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_amp_foreach_non_finite_check_and_unscale_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_amp_update_scale_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_cdist_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_cdist_forward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_cholesky_solve_helper_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_coalesce_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_coalesced_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_conj_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_conj_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_conj_physical_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_convolution_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_copy_from_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_copy_from_and_resize_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_ctc_loss_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_ctc_loss_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_cudnn_ctc_loss_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_cudnn_init_dropout_state_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_cudnn_rnn_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_cudnn_rnn_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_cudnn_rnn_flatten_weight_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_dirichlet_grad_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_efficientzerotensor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_embedding_bag_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_embedding_bag_dense_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_embedding_bag_forward_only_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_embedding_bag_per_sample_weights_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_empty_affine_quantized_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_empty_per_channel_affine_quantized_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_euclidean_dist_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_fake_quantize_learnable_per_channel_affine_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_fake_quantize_learnable_per_tensor_affine_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_fake_quantize_per_tensor_affine_cachemask_tensor_qparams_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foobar_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_abs_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_acos_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_add_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_addcdiv_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_addcmul_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_asin_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_atan_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_ceil_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_clamp_max_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_clamp_min_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_cos_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_cosh_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_div_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_erf_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_erfc_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_exp_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_expm1_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_floor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_frac_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_lerp_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_lgamma_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_log_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_log10_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_log1p_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_log2_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_maximum_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_minimum_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_mul_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_neg_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_norm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_pow_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_reciprocal_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_round_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_sigmoid_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_sign_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_sin_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_sinh_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_sqrt_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_sub_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_tan_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_tanh_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_trunc_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_foreach_zero_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_functional_sym_constrain_range_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_functional_sym_constrain_range_for_size_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_fused_adam_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_fused_adamw_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_fused_dropout_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_fused_moving_avg_obs_fq_helper_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_fw_primal_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_fw_primal_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_grid_sampler_2d_cpu_fallback_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_has_same_storage_numel_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_histogramdd_bin_edges_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_histogramdd_from_bin_cts_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_histogramdd_from_bin_tensors_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_index_put_impl_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_indices_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_is_all_true_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_is_any_true_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_linalg_check_errors_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_lstm_mps_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_make_dual_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_make_dual_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_make_per_channel_quantized_tensor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_make_per_tensor_quantized_tensor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_masked_scale_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_masked_softmax_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_masked_softmax_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_mkldnn_reshape_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_mkldnn_transpose_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_mps_convolution_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_mps_convolution_transpose_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_native_batch_norm_legit_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_native_batch_norm_legit_no_training_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_native_multi_head_attention_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_neg_view_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_neg_view_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_nested_from_padded_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_nested_from_padded_and_nested_example_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_nested_tensor_from_mask_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_nested_tensor_from_tensor_list_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_nested_tensor_size_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_nested_tensor_storage_offsets_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_nested_tensor_strides_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_nested_view_from_buffer_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_new_zeros_with_same_feature_meta_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_nnpack_spatial_convolution_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_pack_padded_sequence_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_pdist_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_pdist_forward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_pin_memory_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_reshape_alias_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_reshape_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_resize_output_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sample_dirichlet_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_segment_reduce_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_slow_conv2d_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_addmm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_broadcast_to_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_coo_tensor_with_dims_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_coo_tensor_with_dims_and_tensors_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_csr_prod_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_csr_sum_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_log_softmax_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_log_softmax_backward_data_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_mask_projection_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_softmax_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_softmax_backward_data_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_sparse_matmul_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_sum_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_sparse_sum_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_spdiags_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_stack_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_standard_gamma_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_standard_gamma_grad_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_test_autograd_multiple_dispatch_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_test_autograd_multiple_dispatch_view_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_test_autograd_multiple_dispatch_view_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_test_functorch_fallback_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_test_optional_filled_intlist_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_test_optional_floatlist_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_test_optional_intlist_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_test_warn_in_autograd_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_thnn_fused_gru_cell_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_thnn_fused_gru_cell_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_thnn_fused_lstm_cell_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_thnn_fused_lstm_cell_backward_impl_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_to_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_to_dense_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_to_sparse_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_to_sparse_bsc_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_to_sparse_bsr_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_to_sparse_csc_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_to_sparse_csr_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_transform_bias_rescale_qkv_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_transformer_encoder_layer_fwd_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_trilinear_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_triton_multi_head_attention_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_triton_scaled_dot_attention_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_unique_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_unique2_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_unsafe_index_put_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_unsafe_view_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_values_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_weight_norm_interface_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/_weight_norm_interface_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/abs_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/add_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/addr_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/affine_grid_generator_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/alias_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/alias_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/allclose_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/arange_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/argsort_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/as_strided_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/as_strided_scatter_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/bartlett_window_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/batch_norm_backward_elemt_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/batch_norm_backward_reduce_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/batch_norm_gather_stats_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/batch_norm_gather_stats_with_counts_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/batch_norm_stats_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/batch_norm_update_stats_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/bernoulli_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/binary_cross_entropy_with_logits_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/bincount_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/binomial_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/bitwise_and_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/bitwise_left_shift_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/bitwise_or_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/bitwise_right_shift_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/bitwise_xor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/blackman_window_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/block_diag_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/bucketize_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cauchy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/ccol_indices_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/ccol_indices_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/celu_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/channel_shuffle_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cholesky_solve_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/clone_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/col_indices_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/col_indices_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/complex_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/conj_physical_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/constant_pad_nd_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/conv_depthwise3d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/conv_tbc_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/convolution_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/convolution_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/convolution_backward_overrideable_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/convolution_overrideable_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/copy_sparse_to_sparse_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/copysign_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/count_nonzero_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/crow_indices_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/crow_indices_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cudnn_affine_grid_generator_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cudnn_affine_grid_generator_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cudnn_batch_norm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cudnn_batch_norm_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cudnn_convolution_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cudnn_convolution_add_relu_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cudnn_convolution_relu_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cudnn_convolution_transpose_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cudnn_grid_sampler_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cudnn_grid_sampler_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cummax_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/cummin_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/deg2rad_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/dequantize_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/detach_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/detach_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/diag_embed_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/diagonal_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/diagonal_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/diagonal_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/diagonal_scatter_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/dist_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/div_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/dot_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/embedding_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/embedding_dense_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/embedding_renorm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/empty_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/empty_like_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/empty_permuted_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/empty_quantized_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/empty_strided_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/expand_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/expand_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/exponential_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/eye_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/fake_quantize_per_channel_affine_cachemask_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/fake_quantize_per_tensor_affine_cachemask_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/fft_fftfreq_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/fft_rfftfreq_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/fill_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/flip_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/fmod_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/frexp_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/from_file_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/full_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/full_like_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/geometric_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/glu_backward_jvp_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/glu_jvp_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/grid_sampler_2d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/grid_sampler_2d_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/grid_sampler_3d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/grid_sampler_3d_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/hamming_window_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/hann_window_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/hardswish_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/huber_loss_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/index_fill_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/index_put_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/indices_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/indices_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/int_repr_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/is_coalesced_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/is_pinned_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/is_same_size_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/isinf_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/isnan_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/kaiser_window_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/kthvalue_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/lift_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/lift_fresh_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/lift_fresh_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/linalg_lstsq_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/linalg_matrix_exp_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/linalg_pinv_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/linear_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/linear_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/linspace_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/log_normal_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/log_softmax_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/logcumsumexp_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/logical_and_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/logical_not_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/logical_or_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/logical_xor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/logspace_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/logsumexp_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/lshift_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/lstm_mps_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/masked_fill_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/masked_scatter_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/matmul_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/max_pool2d_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mean_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/median_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/miopen_batch_norm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/miopen_batch_norm_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/miopen_convolution_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/miopen_convolution_transpose_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/miopen_depthwise_convolution_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/miopen_rnn_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/miopen_rnn_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_adaptive_avg_pool2d_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_convolution_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_linear_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_linear_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_linear_backward_input_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_linear_backward_weights_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_max_pool2d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_max_pool2d_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_max_pool3d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_max_pool3d_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_reorder_conv2d_weight_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_reorder_conv3d_weight_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_rnn_layer_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mkldnn_rnn_layer_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mode_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mps_convolution_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mps_convolution_transpose_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mul_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mv_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/mvlgamma_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/nan_to_num_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/nanmedian_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/native_batch_norm_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/native_dropout_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/native_dropout_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/native_group_norm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/native_group_norm_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/native_layer_norm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/native_layer_norm_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/native_norm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/new_empty_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/new_empty_strided_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/new_full_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/new_ones_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/new_zeros_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/norm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/normal_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/ones_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/ones_like_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/permute_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/permute_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/pixel_shuffle_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/pixel_unshuffle_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/poisson_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/polar_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/polygamma_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/prod_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/put_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/q_per_channel_scales_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/q_per_channel_zero_points_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/quantize_per_channel_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/quantize_per_tensor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/quantize_per_tensor_dynamic_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/quantized_batch_norm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/quantized_max_pool1d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/quantized_max_pool2d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/quantized_max_pool3d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/rad2deg_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/rand_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/rand_like_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/randint_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/randint_like_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/randn_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/randn_like_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/random_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/randperm_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/range_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/relu_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/remainder_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/repeat_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/repeat_interleave_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/resize_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/resize_as_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/resize_as_sparse_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/roll_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/rot90_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/row_indices_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/row_indices_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/rrelu_with_noise_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/rshift_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/rsub_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/scalar_tensor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/segment_reduce_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/select_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/select_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/select_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/select_scatter_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/set_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/slice_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/slice_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/slice_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/slice_scatter_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/slow_conv_dilated2d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/slow_conv_dilated3d_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/smooth_l1_loss_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/soft_margin_loss_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/soft_margin_loss_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/softmax_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/sort_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/sparse_compressed_tensor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/sparse_coo_tensor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/sparse_mask_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/sparse_resize_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/sparse_resize_and_clear_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_chebyshev_polynomial_t_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_chebyshev_polynomial_u_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_chebyshev_polynomial_v_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_chebyshev_polynomial_w_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_hermite_polynomial_h_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_hermite_polynomial_he_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_laguerre_polynomial_l_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_legendre_polynomial_p_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_shifted_chebyshev_polynomial_t_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_shifted_chebyshev_polynomial_u_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_shifted_chebyshev_polynomial_v_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_shifted_chebyshev_polynomial_w_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_xlog1py_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/special_zeta_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/split_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/split_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/split_with_sizes_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/split_with_sizes_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/squeeze_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/squeeze_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/stack_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/std_mean_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/sub_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/sum_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/sym_constrain_range_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/sym_constrain_range_for_size_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/t_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/t_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/to_mkldnn_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/to_padded_tensor_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/trace_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/transpose_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/transpose_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/tril_indices_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/triu_indices_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unbind_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unbind_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unfold_backward_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unfold_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/uniform_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unique_consecutive_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unique_dim_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unique_dim_consecutive_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unsafe_split_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unsafe_split_with_sizes_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unsqueeze_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/unsqueeze_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/values_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/values_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/var_mean_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/vdot_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/view_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/view_as_complex_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/view_as_real_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/view_copy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/xlogy_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/zero_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/zeros_compositeexplicitautograd_dispatch.h>
#include <ATen/ops/zeros_like_compositeexplicitautograd_dispatch.h>



