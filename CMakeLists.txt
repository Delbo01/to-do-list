cmake_minimum_required(VERSION 3.17)
project(to_do_list)

set(CMAKE_CXX_STANDARD 14)

add_executable(to_do_list main.cpp Date.h Date.cpp)