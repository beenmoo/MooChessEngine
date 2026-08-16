#pragma once

#include <cstdint>

namespace moo
{

// Responsible for identifying a chess piece: its type (pawn, knight,
// bishop, rook, queen, king) and color (white, black). Shared vocabulary
// used by Board, Move, and Evaluation.
//
// TODO: represent piece types and colors (e.g. enums, bit flags).
enum class Piece : uint8_t
{
    None = 0,

    WhitePawn = 1,    // 0b0001
    WhiteKnight = 2,  // 0b0010
    WhiteBishop = 3,  // 0b0011
    WhiteRook = 4,    // 0b0100
    WhiteQueen = 5,   // 0b0101
    WhiteKing = 6,    // 0b0110

    BlackPawn = 9,     // 0b1001
    BlackKnight = 10,  // 0b1010
    BlackBishop = 11,  // 0b1011
    BlackRook = 12,    // 0b1100
    BlackQueen = 13,   // 0b1101
    BlackKing = 14,    // 0b1110
};

}  // namespace moo