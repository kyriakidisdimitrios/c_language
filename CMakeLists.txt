cmake_minimum_required(VERSION 3.28)
project(c_language C)

set(CMAKE_C_STANDARD 23)

add_executable(c_language all_files/main.c
        all_files/section1_pointers.c
        all_files/section1_passByReference.c
        all_files/section3_1_arithmetic_intro.c
        all_files/section4_pointers_concept.c
        all_files/section4_void_asterisk.c)
