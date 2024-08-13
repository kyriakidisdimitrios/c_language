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
// void* remove(void* arr, unsigned size, unsigned idx, unsigned sourceSize); //idx initial byte in sequence from where we dont want to get into account the value
// int main() {
//     return 0;
// }
// void* remove(void* arr, unsigned size, unsigned idx, unsigned sourceSize){
//     void *newArr = malloc(size-sourceSize);
//     if (!newArr)return NULL;
//     memcpy(newArr, arr, idx); //to, from, how many bytes
//     memcpy((char*)newArr + idx, (char*)arr + idx + sourceSize, size -idx- sourceSize);
//     return newArr;
// }
