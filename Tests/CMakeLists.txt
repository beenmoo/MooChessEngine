find_package(GTest CONFIG REQUIRED)

add_executable(moo_tests
    Core/BoardTests.cpp
)

target_link_libraries(moo_tests PRIVATE moo_core GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(moo_tests)
