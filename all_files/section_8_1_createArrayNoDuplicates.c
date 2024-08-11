// #include <stdio.h>
// #include <stdlib.h>
//
//
// /*
//  given the sorted arrat of integers [1,3,3,5,6,7,7,7,8,12,12]
// create new dynamically allocated array with no duplicates [1,3,5,6,7,,8,12]
//  */
//
// int  *createNoDuplexArray(int *sourceArray, int size);
//
//
// int main() {
//     int originalArray[] = {1,3,3,5,6,7,7,7,8,12,12};
//     int *newArr = createNoDuplexArray(originalArray, 11);
//     int newSize = 0;
//     for (int i = 0; i < 11; i++) {
//         if (i == 0 || originalArray[i] != originalArray[i - 1]) {
//             newSize++;
//         }
//     }
//     for (int i = 0; i < newSize; i++) {
//         printf("%d ", newArr[i]);
//     }
//     free(newArr);
//     return 0;
// }
//
// int  *createNoDuplexArray(int *sourceArray, int size) {
//     int *noDuplexArray;
//     int count=0;
//     int i, j=0;
//     for (i=0;i<size-1;i++) {
//         if (sourceArray[i] != sourceArray[i+1])
//             count++;
//     }
//     noDuplexArray = (int *)malloc(count*sizeof(int));
//     if (noDuplexArray == NULL) {
//         printf("Memory allocation failed\n");
//         exit(1);
//     }
//     // Fill the new array with unique elements
//     noDuplexArray[0] = sourceArray[0]; // First element is always unique
//     j = 1;
//     for (i = 1; i < size; i++) {
//         if (sourceArray[i] != sourceArray[i - 1]) {
//             noDuplexArray[j] = sourceArray[i];
//             j++;
//         }
//     }
//
//     return noDuplexArray;
// }