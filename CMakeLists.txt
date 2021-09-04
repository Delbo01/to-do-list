cmake_minimum_required(VERSION 3.17)
project(to_do_list)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test)
set(SOURCE_FILES Date.h Date.cpp Activity.h ToDoList.h ToDoList.cpp AllList.cpp AllList.h)
add_executable(to_do_list main.cpp )
add_library(core ${SOURCE_FILES})
target_link_libraries(to_do_list core)