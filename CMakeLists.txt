cmake_minimum_required(VERSION 3.28)
project(c_language C)

set(CMAKE_C_STANDARD 23)

add_executable(c_language all_files/main.c
        all_files/section_1_pointers.c
        all_files/section_1_passByReference.c
        all_files/section_3_1_arithmetic_intro.c
        all_files/section_4_pointers_concept.c
        all_files/section_4_void_asterisk.c
        all_files/section_5_1_searchIfElementIsArray.c
        all_files/section_5_2_inputPrintFunctions.c
        all_files/section_5_3_findPassingByPointers.c
        all_files/section_5_4_updateAverageByReference.c
        all_files/section_5_5_arrayWithGoodNeighboors.c
        all_files/section_5_6_arraySortedOrNot.c
        all_files/section_5_7_arraySortedOrNotRecursive.c
        all_files/section_5_8_reverseArrayOfChars.c
        all_files/section_5_9_countFrequencyOfArrayElements.c
        all_files/section_5_10_second_smallest.c
        all_files/section_5_11_findSpecificElementsSortedArray.c
        all_files/section_5_12_problemWithReturnOfStatic.c
        all_files/section_5_13_palindrome_recursion.c
        all_files/section_5_14_exchangeSignsRecursive.c
        all_files/section_5_15_maximumOf2AdjacentElementUsingPointetrs.c
        all_files/section_5_16_printArrayElements.c
        all_files/section_5_17_findArrayAverageUsingPointersRecursive.c
        all_files/section_5_18_adjacentElementsSortedOnFloatingArray.c
        all_files/section_5_19_printNumberInBinaryUsingRecursion.c
        all_files/section_6_1_SwappingOnComplexity.c
        all_files/section_6_1_SwappingOnComplexityO1.c
        all_files/section_7_1_createReturnAllocatedArray.c
        all_files/section_7_2_printDynamicallyAllocatedArray.c
        all_files/section_7_3_realloc.c
        all_files/section_7_4_universalReallocFunction.c
        all_files/section_7_5_reallocPerformance.c
        all_files/section_7_6_createPass1DArrayPointer2Pointer.c
        all_files/section_8_1_createArrayNoDuplicates.c
        all_files/section_8_2_lowerUpperCaseAllocations.c
        all_files/section_8_2_lowerUpperCaseAllocations2.c
        all_files/section_8_3_insertToArrayFunction.c
        all_files/section_8_3_insertToArrayFunction2.c
        all_files/section_8_4_deleteFromArrayFunction.c
        all_files/section_8_5_copyArrayByReference.c
        all_files/section_8_5_copyArrayByReference2.c
        all_files/section_9_2_arrayOfPointers.c
        all_files/section_9_1_allocate2DMatrix.c
        all_files/section_9_3_print2DMatrix.c
        all_files/section_9_4_dynamicArraysSwap.c
        all_files/section_9_4_dynamicArraysSwap2.c
        all_files/section_9_5_lowerUpperTriangleMatrix.c
        all_files/section_9_6_matrixAllocationAndPassingByReference.c
        all_files/section_10_1_returnStringToFunction.c
        all_files/section_10_2_ectraStringAndPointers.c
        all_files/section_11_stringLength.c
        all_files/section_12_compare2StringsUsingPointers.c)
