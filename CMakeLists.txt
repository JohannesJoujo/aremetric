cmake_minimum_required(VERSION 3.24)
project(aremetric)

set(CMAKE_CXX_STANDARD 17)

add_executable(aremetric main.cpp Lexer.cpp Lexer.h expr.cpp expr.h)
