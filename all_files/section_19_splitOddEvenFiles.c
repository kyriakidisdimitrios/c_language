// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
//
// //Exercise:Sorting Numbers from a file into odd and even files
//
// /* The tasks is to write a function that accepts the filename as an argument.
//  * The filename contains integer number separated by space characters.
//  * Based on the integers in this source file, the function should generate two new files:
//  * odd.txt and even.txt
//  * The files should hold the odd and the even values from the source file, respectively
//  *
//  *
//  **/
// void sort_even_odd_files(char* filename) {
//     FILE* sourceFP = NULL;
//     FILE* oddFP = NULL;
//     FILE* evenFP = NULL;
//
//     int num;
//
//     sourceFP = fopen(filename, 'r');
//     if (sourceFP!=NULL) {
//         printf("Could open the file..\n");
//         return;
//     }
//     oddFP = fopen("odd.txt", "w");
//     evenFP = fopen("even.txt","w");
//
//     //assert
//     while(fscanf(sourceFP, "%d", &num) != EOF) {
//         if(num%2 ==0)
//             fprintf(evenFP, "%d ", num);
//         else
//             fprintf(oddFP, "%d ", num);
//     }
//     fclose(sourceFP);
//     fclose(evenFP);
//     fclose(oddFP);
//
// }
// int main() {
//     sort_even_odd_files("myFile.txt");
//     return 0;
// }