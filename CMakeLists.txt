cmake_minimum_required(VERSION 3.21)
project(Jigsaw)

set(CMAKE_CXX_STANDARD 23)

add_executable(Jigsaw main.cpp Costumer.cpp Costumer.h Author.cpp Author.h Book.cpp Book.h)
