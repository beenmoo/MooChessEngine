#include "Uci/UciEngine.h"

#include <iostream>
#include <string>

namespace moo
{

UciEngine::UciEngine()
{
}

void UciEngine::Run()
{
    std::string line;
    while (std::getline(std::cin, line))
    {
        // TODO: dispatch UCI commands here.
        if (line == "uci")
        {
            std::cout << "id name MooChessEngine" << std::endl;
            std::cout << "id author Your Name" << std::endl;
            std::cout << "uciok" << std::endl;
        }
        else if (line == "isready")
        {
            std::cout << "readyok" << std::endl;
        }
        else if (line == "ucinewgame")
        {
            // TODO: reset engine state for a new game
        }
        else if (line == "quit")
        {
            break;
        }
    }
}

}  // namespace moo
