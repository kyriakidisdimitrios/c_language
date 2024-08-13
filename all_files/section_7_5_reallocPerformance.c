// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// /*
//  task: write a function that creates and fills with values a dynamic array,
// the size of the array is UNKNOWN in advance.
// what's known is that once we read a value of -1, the function should stop reading inputs from the user, and it should return the array
//  */
//
// int* adjustableReallocation(int *arrSize) {
//     int num, lastIndex = 0, size = 2;
//     int* arr = NULL;
//     int* temp = NULL;
//
//     printf("Enter a num: ");
//     scanf("%d", &num);
//
//     if (num == -1) { // empty array
//         *arrSize = 0;
//         return NULL;
//     } else {
//         temp = (int*)malloc(size * sizeof(int));
//         if (!temp) return NULL;
//         arr = temp;
//     }
//
//     while (num != -1) {
//         // IMPORTANT
//         if (lastIndex == size) {
//             size *= 2;
//             temp = (int*)realloc(arr, size * sizeof(int));
//             if (!temp) {
//                 free(arr); // Free the original array if realloc fails
//                 return NULL;
//             }
//             arr = temp;
//         }
//
//         arr[lastIndex] = num;
//         lastIndex++;
//         printf("Enter a num: ");
//         scanf("%d", &num);
//     }
//
//     // final realloc
//     arr = (int*)realloc(arr, lastIndex * sizeof(int));
//
//     *arrSize = lastIndex;
//     return arr;
// }
//
// int main() {
//     int arrSize;
//     int* arr = adjustableReallocation(&arrSize);
//
//     if (arr) {
//         printf("Array contents: ");
//         for (int i = 0; i < arrSize; i++) {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//
//         free(arr); // Free the allocated memory
//     } else {
//         printf("No array was created.\n");
//     }
//
//     return 0;
// }
