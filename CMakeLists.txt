cmake_minimum_required(VERSION 3.10)

project(last)

set(CMAKE_CXX_STANDART 11)
set(CMAKE_CXX_STANDART_REQUIRED True)

include_directories(src)

add_executable(last src/main.cpp src/utils.cpp src/utils.hpp)