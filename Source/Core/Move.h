#pragma once

namespace moo
{

// Responsible for representing a single chess move: source and
// destination squares, the piece involved, and any special move data
// (captures, promotions, castling, en passant). Does not decide whether
// a move is legal — that's Board/Search's job.
class Move
{
public:
    Move();

    // TODO: represent a chess move (from/to squares, promotion, special move flags, etc.)
};

}  // namespace moo
