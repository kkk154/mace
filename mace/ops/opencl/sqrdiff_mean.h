// Copyright 2018 Xiaomi, Inc.  All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MACE_OPS_OPENCL_SQRDIFF_MEAN_H_
#define MACE_OPS_OPENCL_SQRDIFF_MEAN_H_

#include "mace/public/mace.h"
#include "mace/utils/utils.h"
namespace mace {

class OpContext;
class Tensor;

namespace ops {
class OpenCLSqrDiffMeanKernel {
 public:
  virtual MaceStatus Compute(
      OpContext *context,
      const Tensor *input0,
      const Tensor *input1,
      Tensor *output) = 0;
  MACE_EMPTY_VIRTUAL_DESTRUCTOR(OpenCLSqrDiffMeanKernel);
};

}  // namespace ops
}  // namespace mace

#endif  // MACE_OPS_OPENCL_SQRDIFF_MEAN_H_
