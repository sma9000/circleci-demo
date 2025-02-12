cmake_minimum_required(VERSION 3.10)
project(DemoTests)

set(CMAKE_CXX_STANDARD 17)

# Find Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

# Add test executable
add_executable(runTests test_demo.cpp)

# Link Google Test
target_link_libraries(runTests GTest::gtest_main)
