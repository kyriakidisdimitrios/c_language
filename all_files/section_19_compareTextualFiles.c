// #define _CRT_SECURE_NO_WARNINGS
// #include <limits.h>
// #include <stdio.h>
//
// //exercise: ciomparing two textual files
//
// /* the task is to write a function that takes 2 filenames as arguments.
//  * This function will open and compare the context of these files
//  * if the content of both files is identical, the function will return 1.
//  * If the files differ in any way the function will return 0.
//  *
//  */
// void compareFile(char* filename1, char* filename2) {
//     FILE * sourceFP1 = fopen(filename1, 'r');
//     FILE * sourceFP2 = fopen(filename2, 'r');
//     if (sourceFP1==NULL || sourceFP2==NULL) {
//          printf("Could open the file..\n");
//         if (sourceFP1 != NULL) fclose(sourceFP1);
//         if (sourceFP2 != NULL) fclose(sourceFP2);
//          return;
//     }
//     char charToTest1;
//     char charToTest2;
//     while (1) {
//         charToTest1 = fgetc(sourceFP1);
//         charToTest2 = fgetc(sourceFP2);
//
//         // Check if we have reached the end of either file
//         if (charToTest1 == EOF || charToTest2 == EOF) {
//             break;
//         }
//
//         // Compare the characters
//         if (charToTest1 != charToTest2) {
//             printf("Files are not the same\n");
//             return; // Files are different
//         }
//     }
//     // Check if both files reached EOF at the same time
//     if (charToTest1 == EOF && charToTest2 == EOF) {
//         printf("Files are the same\n");
//         return; // Files are identical
//     } else {
//         printf("Files are not the same\n");
//         return; // One file is longer than the other
//     }
//
//
//     fclose(sourceFP1);
//     fclose(sourceFP2);
// }
// int main() {
//     compareFile("hello1.txt", "hello2.txt");
//     return 0;
// }