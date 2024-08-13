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
// void* copyArray(void* arr, int size);
// int main() {
//     double arr[] = {1.4, 3, 3, 5, 6, 7, 7, 7, 8, 12, 12.9};
//     int size = sizeof(arr);
//     void* copiedArray = copyArray(arr,size);
//     printArray((double*)copiedArray, size / sizeof(double));
//     free(copiedArray);
//     return 0;
// }
// void* copyArray(void* arr, int size) {
//     void* newArr = malloc(size);;
//     memcpy((char*)newArr,arr, size);
//     return newArr;
// }