// Responsible only for process startup: constructing a UciEngine and
// handing control to it. No chess or protocol logic belongs here.

#include "Uci/UciEngine.h"

#include <iostream>

int main()
{
    std::cout << "Moo Chess Engine" << std::endl;

    moo::UciEngine engine;
    engine.Run();

    return 0;
}
