// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 5
//
// //array of integers
// //we will return the address of the first element
// void printArr(int *arr, int size) {
//     int i;
//     for (i=0;i<size;i++) {
//         printf("%d", arr[i]);
//     }
//     printf("\n");
// }
// int *createArray(); // int * because it will return the address  of an integer
// int main() {
//     int *arr;
//     arr = createArray();
//     printArr(arr, SIZE);
//     //arr[2]
// }
// int *createArray() {
//     int i;
//     int myArr[SIZE];
//     printf("Enter %d elements to your array.\n", SIZE);
//     for(i=0; i<SIZE; i++) {
//         printf("Enter number: %d" , i);
//         scanf("%d", &myArr[i]);
//     }
//     return &myArr[0];
//     //or myArr;
// }