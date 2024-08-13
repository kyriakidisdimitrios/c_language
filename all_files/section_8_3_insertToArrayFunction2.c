// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
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
//
// void* insert(void* arr, unsigned size, unsigned idx, void* source, unsigned sourceSize);
//
// int main() {
//     return 0;
// }
// void* insert(void* arr, unsigned size, unsigned idx, void* source, unsigned sourceSize) {
//     void *newArr = malloc(size+sourceSize);
//     if (!newArr) return NULL;
//     memcpy(newArr, arr, idx);
//     memcpy((char*)newArr+idx, source, sourceSize);  //because newArr+idx does not know how many bytes to copy, so we cast to char, which is pointer to a byte
//     memcpy((char*)newArr + idx + sourceSize, (char *)arr +idx, size - idx);
//     return newArr;
// }
//
//
