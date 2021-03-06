#pragma once

#include "torch/csrc/jit/ir.h"

namespace torch { namespace jit {

void RemoveExpands(const std::shared_ptr<Graph>& graph);

}}
