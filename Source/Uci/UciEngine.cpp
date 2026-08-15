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
    }
}

}  // namespace moo
