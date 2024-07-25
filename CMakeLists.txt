cmake_minimum_required(VERSION 3.28)
project(c_language C)

set(CMAKE_C_STANDARD 23)

add_executable(c_language all_files/main.c
        all_files/section1_pointers.c
        all_files/section1_passByReference.c
        all_files/section3_1_arithmetic_intro.c
        all_files/section4_pointers_concept.c
        all_files/section4_void_asterisk.c
        all_files/section5_1_searchIfElementIsArray.c
        all_files/section5_2_inputPrintFunctions.c
        all_files/section5_3_findPassingByPointers.c
        all_files/section5_4_updateAverageByReference.c
        all_files/section5_5_arrayWithGoodNeighboors.c
        all_files/section5_6_arraySortedOrNot.c
        all_files/section5_7_arraySortedOrNotRecursive.c
        all_files/section5_8_reverseArrayOfChars.c
        all_files/section5_9_countFrequencyOfArrayElements.c
        all_files/section5_10_second_smallest.c
        all_files/section5_11_findSpecificElementsSortedArray.c
        all_files/section5_12_problemWithReturnOfStatic.c
        all_files/section5_13_palindrome_recursion.c
        all_files/section5_14_exchangeSignsRecursive.c
        all_files/section5_15_maximumOf2AdjacentElementUsingPointetrs.c
        all_files/section5_16_printArrayElements.c
        all_files/section5_17_findArrayAverageUsingPointersRecursive.c
        all_files/section5_18_adjacentElementsSortedOnFloatingArray.c
        all_files/section5_19_printNumberInBinaryUsingRecursion.c)
