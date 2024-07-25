// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 4
// //a functiioon to search if element is in a given array
// int findIfKeyInArray(int* arr, int size, int key) {
//     int i;
//     for (i=0;i<size;i++) {
//         if (arr[i] == key) return 1;
//     }
//     return 0;
// }
// //a function that should recieve an array and its size, should find and return the maximum value in the array
// int findMaxValueInArray(int* arr, int size) {
//     int max=0;
//     for (int i=0;i<size;i++) {
//         if (arr[i]>max) max = arr[i];
//     }
//     return max;
// }
// //a function that recieves an Array and its size, should calculate and return the average value of the array
// int findAvgValueInArray(int* arr, int size) {
//     int sum=0;
//     int i;
//     for (i=0;i<size;i++) {
//         sum += arr[i];
//     }
//     return (double)sum/i;
// }
//
// int main() {
//     int grades[SIZE] = {80,85,72,90};
//     int result;
//     //grade is the address of te first element of the array
//     //result = findIfKeyInArray(grades, SIZE, 81);
//     //result = findMaxValueInArray(grades, SIZE);
//     result = findAvgValueInArray(grades, SIZE);
//     printf("%d", result);
//     return 0;
// }