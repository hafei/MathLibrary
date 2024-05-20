cmake_minimum_required(VERSION 3.28)
project(MathLibrary)

set(CMAKE_CXX_STANDARD 17)

add_library(MathLibrary SHARED
        MathLibrary.cpp
        MathLibrary.h)
