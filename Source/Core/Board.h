#pragma once

namespace moo
{

// Responsible for representing a single chess position: piece placement,
// side to move, castling rights, en passant target, and move counters.
// Owns applying and undoing Moves against that state, and converting
// to/from FEN.
class Board
{
public:
    Board();

    // TODO: board representation, FEN parsing/generation, make/unmake move, etc.
};

}  // namespace moo
