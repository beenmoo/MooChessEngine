add_library(moo_core STATIC
    Core/Board.cpp
    Core/Move.cpp
    Engine/Engine.cpp
    Engine/Search.cpp
    Engine/Evaluation.cpp
    Uci/UciEngine.cpp
)

target_include_directories(moo_core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(moo main.cpp)
target_link_libraries(moo PRIVATE moo_core)
