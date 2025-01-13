cmake_minimum_required(VERSION 3.12)

project(fibonacci)

include(FetchContent)

find_package(GTest REQUIRED)

add_executable(MyExecutable main.c)

file(GLOB_RECURSE SRC_FILES src/*.c src/*.cpp)
target_sources(MyExecutable PRIVATE ${SRC_FILES})
target_include_directories(MyExecutable PRIVATE src)

target_compile_options(MyExecutable PRIVATE -g -fstack-usage)

# Enable Google testing
enable_testing()

add_executable(fibonacci_test fibonacci_test.cc)
target_sources(fibonacci_test PRIVATE ${SRC_FILES})
target_link_libraries(fibonacci_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(fibonacci_test)