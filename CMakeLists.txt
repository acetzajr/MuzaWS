
cmake_minimum_required(VERSION 3.10)
project(Muza)
file(GLOB_RECURSE MUZA_SRC "Source/*.c")
add_executable(Muza ${MUZA_SRC})
target_compile_options(Muza PRIVATE -std=gnu23 -Wall -Wextra -Wpedantic)
target_include_directories(Muza PRIVATE "Include")