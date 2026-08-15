#pragma once

namespace moo
{

// Responsible for the UCI protocol boundary: reading engine commands
// from stdin, writing responses/info back to stdout, and translating
// between UCI text and calls into Engine. Owns no chess logic itself.
class UciEngine
{
public:
    UciEngine();

    // Reads commands from stdin and responds per the UCI protocol until "quit".
    void Run();

    // TODO: parse/handle UCI commands (uci, isready, position, go, stop, quit, etc.)
};

}  // namespace moo
