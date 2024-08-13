// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// void printArray(double *arr, int size) {
//     printf("Array values: \n");
//     for (int i=0;i<size;i++) {
//         printf("%f ", arr[i]);
//     }
//     printf("\n");
// }
// void allocateAndCopyArray(int* original, int sizeOfOriginal, int **target);
// int main() {
//     double arr[3] = {1,5,4};
//     int* copiedArr;
//     allocateAndCopyArray(arr, sizeof(arr), &copiedArr);
//     printArray(copiedArr, sizeof(copiedArr));
//     free(copiedArr);
//     return 0;
// }
// void allocateAndCopyArray(int* original, int sizeOfOriginal, int **target) {
//     int i;
//     *target = (int*)malloc(sizeOfOriginal*sizeof(int));
//     if (*target==NULL) {
//         printf("Memory allocation failed");
//     }
//     else {
//         for(i=0;i<sizeOfOriginal;i++) {
//             (*target)[i] = original[i];
//         }
//     }
// }