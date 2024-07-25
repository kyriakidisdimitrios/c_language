// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 3
//
//
// //write recursive function that recieves an array an its size, returns the average value of the array
// //example 1,4,3 size=3 should return 2.6666 (8/3)
//
// double averageValueOfArray(int *pArr, int size, int *sumValues, const int originalSize);
// int main() {
//     int sumValues = 0;
//     int arr[SIZE]={1,4,3};
//     double result = averageValueOfArray(arr,SIZE, &sumValues, SIZE);
//     printf("average value is %f", result);
//     return 0;
// }
// double averageValueOfArray(int *pArr, int size, int *sumValues, const int originalSize) {
//     if (size>0) {
//         *sumValues += pArr[0];
//         averageValueOfArray(pArr+1,size-1,sumValues, originalSize);
//
//     }
//     if (size==0) {
//         return (double)(*sumValues)/originalSize;
//     }
//     return (double)(*sumValues) / originalSize;
// }