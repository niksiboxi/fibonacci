cmake_minimum_required(VERSION 3.12)

project(fibonacci)

add_executable(MyExecutable main.c)

target_compile_options(MyExecutable PRIVATE -g -fstack-usage)

# Custom target to print stack usage
add_custom_target(print_stack_usage ALL
    COMMAND ${CMAKE_COMMAND} -E echo "Stack usage for each function:"
    COMMAND ${CMAKE_COMMAND} -E cat ${CMAKE_BINARY_DIR}/CMakeFiles/MyExecutable.dir/*.su
    DEPENDS MyExecutable
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)