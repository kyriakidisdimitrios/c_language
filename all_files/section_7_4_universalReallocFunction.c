// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// void* myRealloc(void *srcblock, unsigned oldsize, unsigned newsize);
//
//
// int main() {
//     int* numbers= (int*)malloc(3*sizeof(int));
//     int* newNumbers = NULL;
//     if(!numbers)
//         return 1;
//     numbers[0] = 3;
//     numbers[1] = 5;
//     numbers[2] = 4;
//     newNumbers = (int*)myRealloc(numbers, 3*sizeof(int), 2*sizeof(int));
// }
// //solution 1
// // void* myRealloc(void *srcblock, unsigned oldsize, unsigned newsize) {
// //     //int* resultArr = (int*)malloc(newsize);
// //     //resultArr[0] = srcblock[0]; *srcblock is void, *resultArr is int, this cannot happen, because it does not know how much memory is the first
// //
// //     int smallSize;
// //     if (oldsize < newsize)
// //         smallSize = oldsize;
// //     else
// //         smallSize = newsize;
// //
// //     int i;
// //     char* resultArr  =(char*)malloc(newsize);
// //     if(!resultArr) return NULL;
// //     for(i=0; i< smallSize;i++)
// //         resultArr[i] = ((char*)srcblock)[i];
// //     free(srcblock);
// //     return resultArr;
// // }
// //solution 2
//
// void* myRealloc(void *srcblock, unsigned oldsize, unsigned newsize) {
//     int smallSize;
//     void* newArr = malloc(newsize);
//     if (!newArr) return NULL;
//     if (oldsize < newsize)
//         smallSize = oldsize;
//     else
//         smallSize = newsize;
//     memcpy(newArr, srcblock, smallSize);
// }