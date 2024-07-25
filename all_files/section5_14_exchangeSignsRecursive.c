// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 5
//
// //Recursion and arrays. Develop recursive functions that recieves an array of integers and its size.
// //The function should return:
// //-1, if every two ajacent elements have the opposite sign.
// //-0, otherwise (at least one pair of the adjacent elements with the same sign),
//
// //example: arr =-1,-2,-4 size -3 --> 1
// // arr=1,-2,4,5,-3 size=5 --> 0
//
// int exchangeSignCheckRecursive(int *pArr, int size) {
//     if (size<=1) return 1;
//     if ((pArr[0] * pArr[1]) > 0) return 0;
//     else return exchangeSignCheckRecursive(pArr+1, size-1);
//
// }
// int main() {
//     int arr[SIZE]={1,-2,3,-9,-10};
//     int result = exchangeSignCheckRecursive(arr, SIZE);
//     printf("Array is %s Palindrome", result ?  "" : "is not");
//     return 0;
// }
