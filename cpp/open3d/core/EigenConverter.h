// ----------------------------------------------------------------------------
// -                        Open3D: www.open3d.org                            -
// ----------------------------------------------------------------------------
// The MIT License (MIT)
//
// Copyright (c) 2018 www.open3d.org
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// ----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include "open3d/core/Device.h"
#include "open3d/core/Dtype.h"
#include "open3d/core/Tensor.h"
#include "open3d/core/TensorList.h"

namespace open3d {
namespace core {
namespace eigen_converter {

Eigen::Vector3d TensorToEigenVector3d(const core::Tensor &tensor);

core::Tensor EigenVector3dToTensor(const Eigen::Vector3d &value,
                                   core::Dtype dtype,
                                   const core::Device &device);

core::TensorList EigenVector3dVectorToTensorList(
        const std::vector<Eigen::Vector3d> &values,
        core::Dtype dtype,
        const core::Device &device);

core::Tensor EigenVector3dVectorToTensor(
        const std::vector<Eigen::Vector3d> &values,
        core::Dtype dtype,
        const core::Device &device);

}  // namespace eigen_converter
}  // namespace core
}  // namespace open3d
