cmake_minimum_required(VERSION 4.3)
project(MathHeaders)

set(CMAKE_CXX_STANDARD 17)

add_executable(MathHeaders main.cpp
        math.cpp
        math.h)
