// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// void printArray(int *ptr, int size) { //*ptr because we need the addresses
//     int i;
//     printf("Printing the grades:\n");
//     for(i=0;i<size;i++) {
//         printf("Grades[%d] = %d\n", i, ptr[i]);
//     }
//     printf("Done:\n");
// }
//
// int main() {
//     int *grades;
//     int arraySize;
//     printf("Enter the number of grades that you have");
//     scanf("%d", &arraySize);
//     grades = (int *)malloc(sizeof(int) * arraySize);
//     //inputArray
//     printArray(grades,arraySize);
//     return 0;
// }