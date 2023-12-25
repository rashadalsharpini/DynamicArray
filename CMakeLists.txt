cmake_minimum_required(VERSION 3.27)
project(DynamicArray)

set(CMAKE_CXX_STANDARD 17)

add_executable(DynamicArray main.cpp
        DynamicArray.cpp
        DynamicArray.h
        student.cpp
        student.h)
