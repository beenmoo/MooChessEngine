#pragma once

namespace moo
{

// Responsible for exploring the game tree from a given position to find
// the best move: move generation/ordering, the search algorithm (e.g.
// minimax/alpha-beta), depth/time control, and any transposition table.
// Calls into Evaluation to score the positions it visits.
class Search
{
public:
    Search();

    // TODO: implement move search (e.g. minimax, alpha-beta, iterative deepening).
};

}  // namespace moo
