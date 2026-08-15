// Responsible for verifying Board's behavior in isolation. Mirrors the
// Source/Core layout — add one *Tests.cpp per class under test.

#include <gtest/gtest.h>

#include "Core/Board.h"

TEST(BoardTest, ConstructsWithoutThrowing)
{
    moo::Board board;
}
