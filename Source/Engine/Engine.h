#pragma once

namespace moo
{

// Responsible for owning a Board and, given the current position,
// producing a move to play. Coordinates Search and Evaluation but does
// not implement either itself — this is the layer UciEngine talks to.
class Engine
{
public:
    Engine();

    // TODO: tie together board state, search, and evaluation to choose a move.
};

}  // namespace moo
