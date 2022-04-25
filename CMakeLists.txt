cmake_minimum_required(VERSION 3.21)
project(Jigsaw)

set(CMAKE_CXX_STANDARD 23)

add_executable(Jigsaw main.cpp src/Costumer.cpp include/Costumer.h src/Author.cpp include/Author.h src/Book.cpp include/Book.h src/Library.cpp include/Library.h)
