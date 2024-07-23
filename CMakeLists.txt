cmake_minimum_required(VERSION 3.28)
project(c_language C)

set(CMAKE_C_STANDARD 23)

add_executable(c_language main.c
        section1_pointers.c
        section1_passByReference.c)
