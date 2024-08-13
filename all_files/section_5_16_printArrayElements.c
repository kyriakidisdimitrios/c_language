// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 4
//
// //develop 2 recursive functions, both should recieve an array and its size
//
// //fun A-> print all array from left most value to right most value;
// //fun B-> print all array from right most value toleft most value;
// //example 1,3,2,4, size=4;
// //fun A should print: 1 3 2 4
// //fun A should print: 4 2 3 1
//
//
// void printArrayRecursive(int* arr, int size) {
//     if(size>0) {
//         printArrayRecursive(arr+1,size-1);
//         printf("%d",arr[0]);
//     }
// }
// void printArrayRecursiveTReversed(int* arr, int size) {
//     if(size>0) {
//         printf("%d",arr[size-1]);
//         printArrayRecursive(arr,size-1);
//     }
// }
// int main() {
//     int arr[SIZE]={1,2,3,-9,};
//
//     return 0;
// }
//
