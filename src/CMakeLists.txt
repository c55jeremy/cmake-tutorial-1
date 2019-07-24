cmake_minimum_required (VERSION 3.5)
project(cmake_lesson1)
add_executable(hello hello_cmake.cpp)
add_definitions(-DDEF_IN_CMAKE)
