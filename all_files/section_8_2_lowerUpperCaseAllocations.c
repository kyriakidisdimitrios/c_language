// #include <stdio.h>
// #include <stdlib.h>
//
// //array for odd values
// //array for even values
//
// void printArray(int *arr, int size) {
//     printf("Array values: \n");
//     for (int i=0;i<size;i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// void generateOddEvenArrays(int *sourceArray, int size, int **oddArray, int **evenArray, int *sizeOdd,int *sizeEv) {
//     *sizeOdd=0;
//     *sizeEv=0;
//
//     for (int i=0;i<size;i++) {
//        if (sourceArray[i]%2==0) *sizeEv++;
//        else if (sourceArray[i]%2==1) *sizeOdd++;
//     }
//     *oddArray =  (int*)malloc(*sizeOdd*sizeof(int));
//     *evenArray =  (int*)malloc(*sizeEv*sizeof(int));
//     if (*oddArray ==NULL || *evenArray ==NULL) {
//         printf("Memory allocation failed");
//         exit(1);
//     }
//     int a=0, b=0;
//     for (int i=0;i<size;i++) {
//         if (sourceArray[i]%2==0) {
//             (*evenArray)[a] = sourceArray[i];
//             a++;
//         }
//         else{
//             (*oddArray)[b] = sourceArray[i];
//             b++;
//         }
//     }
// }
//
//
// int main() {
//     int *oddArr;
//     int *evArr;
//     int size=7;
//     int sizeOdd, sizeEv;
//
//     int originalArray[]= {12,5,7,8,10,4,9};
//     generateOddEvenArrays(originalArray, size, &oddArr, &evArr, &sizeOdd, &sizeEv);
//
//     printArray(oddArr, sizeOdd);
//     printArray(evArr, sizeEv);
//
//     free(oddArr);
//     free(evArr);
//     return 0;
// }