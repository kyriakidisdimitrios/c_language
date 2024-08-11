// #include <stdio.h>
// #include <stdlib.h>
//
// void printArray(int *arr, int size) {
//     printf("Array values: \n");
//     for (int i=0;i<size;i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
//
// void generateOddEvenArrays(int *sourceArray, int size, int **oddArray, int **evenArray, int *oddSize, int *evenSize);
// int main() {
//
//     int originalArray[] = {1,3,3,5,6,7,7,7,8,12,12};
//
//     int *oddArr, *evArr;
//     int oddSize, evSize;
//
//     generateOddEvenArrays(originalArray, 11, &oddArr, &evArr, &oddSize, &evSize);
//
//
//     printArray(oddArr, oddSize);
//     printArray(evArr, evSize);
//     free(oddArr);
//     free(evArr);
//     return 0;
// }
//
// void generateOddEvenArrays(int *sourceArray, int size, int **oddArray, int **evenArray, int *oddSize, int *evenSize) {
//     *oddSize = 0;
//     *evenSize = 0;
//     int i;
//     for (i=0;i<size;i++) {
//         if (sourceArray[i]%2 == 0) {
//             (*evenSize)++;
//         }
//         else {
//             (*oddSize)++;
//         }
//     }
//     *oddArray = (int*)malloc(*oddSize * sizeof(int));
//     *evenArray = (int*)malloc(*evenSize * sizeof(int));
//
//     if (*oddArray == NULL || *evenArray == NULL) {
//         printf("Memory allocation failed");
//         exit(1);
//     }
//     int odd=0, even = 0;
//     for (i=0;i<size;i++) {
//         if (sourceArray[i]%2 == 0) {
//             (*evenArray)[even] = sourceArray[i];
//             even++;
//         }
//         else {
//             (*oddArray)[odd] = sourceArray[i];
//             odd++;
//         }
//     }
//
//
// }