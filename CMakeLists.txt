cmake_minimum_required(VERSION 3.16)
project(enigma)

set(CMAKE_CXX_STANDARD 20)

add_executable(enigma src/main.cpp src/Rotor.cpp src/Rotor.h)