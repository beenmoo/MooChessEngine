# MooChessEngine
Chess engine created for learning purposes.

## Layout

```
Source/
  Core/     board & move representation (Board, Move, Piece) — TODO
  Engine/   search & evaluation (Engine, Search, Evaluation) — TODO
  Uci/      UCI protocol loop (UciEngine) — TODO
  Main.cpp  entry point, starts the UCI loop
Tests/      GoogleTest suite, mirrors Source/ layout
```

`Source/` builds a `moo_core` static library (everything except `Main.cpp`) linked by
both the `moo` executable and `moo_tests`, so engine logic is testable in isolation.

## Build

Requires a [vcpkg](https://github.com/microsoft/vcpkg) install with the
`VCPKG_ROOT` environment variable set.

```
cmake --preset default
cmake --build --preset default
ctest --preset default
```
