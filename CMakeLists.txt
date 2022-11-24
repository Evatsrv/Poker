cmake_minimum_required(VERSION 3.23)
project(PPtest)

set(CMAKE_CXX_STANDARD 14)

add_executable(PPtest main.cpp
        Player.h
        Player.cpp
        Card.h
        Card.cpp)
