cmake_minimum_required(VERSION 3.16)
project(secretInput)

set(CMAKE_CXX_STANDARD 20)

add_executable(input main.cpp src/input.h src/console/linux.h src/console/window.h)
