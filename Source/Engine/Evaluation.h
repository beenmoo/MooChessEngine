#pragma once

namespace moo
{

// Responsible for scoring a single position numerically (material,
// piece-square tables, other positional factors) so Search can compare
// candidate moves. Has no knowledge of the search tree itself.
class Evaluation
{
public:
    Evaluation();

    // TODO: implement position evaluation (material, piece-square tables, etc.).
};

}  // namespace moo
