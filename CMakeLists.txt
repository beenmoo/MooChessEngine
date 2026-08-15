cmake_minimum_required(VERSION 3.21)

project(MooChessEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(MOO_BUILD_TESTS "Build the Moo test suite" ON)

add_subdirectory(Source)

if(MOO_BUILD_TESTS)
    enable_testing()
    add_subdirectory(Tests)
endif()
