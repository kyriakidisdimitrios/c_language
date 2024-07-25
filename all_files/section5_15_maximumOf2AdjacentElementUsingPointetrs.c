// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 5
//
// //Recursion and arrays. Develop recursive functions that recieves an array of integers and its size.
// //The function should calculate and return the maximum sum of the adjacent elements.
//
// //example: arr =1,2,4,3,1 size -3 --> 7
// // arr=9,2,4,5,3 size=5 --> 11
//
// void exchangeSignCheckRecursive(int *pArr, int size, int *biggestSum) {
//     if (size>1){
//         if ((pArr[0] + pArr[1]) > *biggestSum) *biggestSum = pArr[0] + pArr[1];
//         exchangeSignCheckRecursive(pArr+1, size-1, biggestSum);
//     }
// }
// int main() {
//     int biggestSum = 0;
//     int arr[SIZE]={1,2,3,-9,-10};
//     exchangeSignCheckRecursive(arr, SIZE, &biggestSum);
//     printf("Biggest sum of the array is %d\n", biggestSum);
//     return 0;
// }
