// #include <stdio.h>
// #include <stdlib.h>
//
//
// /* exercise: I want to make a function that takes the array {1.4,3,3,5,6,7,7,7,8,12,12.9}
//  * and put the secondLast=2.3 on the second from the right side of the array, like this {1.4,3,3,5,6,7,7,7,8,12,2.3,12.9} */
// void printArray(double *arr, int size) {
//     printf("Array values: \n");
//     for (int i=0;i<size;i++) {
//         printf("%f ", arr[i]);
//     }
//     printf("\n");
// }
// double* createArray(double *arr, int size, double **newArray);
//
// void writeOntheSecondLastOfArray(double **arr, double second, int size);
// int main() {
//     double *newArray;
//     double originalArray[] = {1.4,3,3,5,6,7,7,7,8,12,12.9};
//     newArray = createArray(originalArray, 11, &newArray);
//
//     double secondLast =2.3;
//
//     printArray(originalArray, 11);
//     writeOntheSecondLastOfArray(&newArray, secondLast, 11);
//     printArray(newArray, 12);
//     free(newArray);
//     return 0;
// }
//
// double* createArray(double *arr, int size, double **newArray) {
//     (*newArray) = (double *)malloc(size * sizeof(double));
//     if (*newArray == NULL) {
//         printf("Memory allocation failed\n");
//         exit(1);
//     }
//     for (int i=0;i<size;i++)
//         (*newArray)[i] = arr[i];
//     return (*newArray);
// }
// void writeOntheSecondLastOfArray(double **arr, double second, int size) {
//     double* newArr =NULL;
//     newArr = (double *)realloc(*arr, (size+1)* sizeof(double));
//     if (newArr==NULL) {
//         printf("\nMemory Reallocation failed");
//         exit(1);
//     }
//     *arr = newArr;
//     newArr[size] = newArr[size -1];
//     newArr[size -1] = second;
// }