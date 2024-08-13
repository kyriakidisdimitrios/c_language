// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 4
//
// //write a function that recieves an array of characters
// //the functrion should reverse the array(recursively)
//
// void swap(char *ptr1, char *ptr2) {
//     char temp;
//     temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
// }
// void printArray(char* arr,int size) {
//     int i;
//     for(i=0;i<size;i++) {
//         printf("%c ", arr[i]);        //%c for char
//     }
// }
// void reverseArrIterative(char* arr, int size) {
//     int i;
//     for (i=0;i<size/2;i++) {
//         swap(&arr[i], &arr[size -1 -i]); //swap the addresses
//         // swap(arr, arr+size-1 -i);
//     }
// }
// void reverseArrRecursive(char* arr, int size) {
//     //1 STOPPING CONDITION size<=1
//     if (size>1) {
//         swap(&arr[0], &arr[size -1]);
//         // swap(arr, arr+size-1); //with ACTUAL addresses
//         reverseArrRecursive(arr+1, size -2); //address of next element, size-2 because we already checked first and last
//
//     }
// }
// int main() {
//     char arr[SIZE] = {'a','f','k','d'};
//     printArray(arr, SIZE);
//     printf("\n");
//     reverseArrRecursive(arr,SIZE);
//
//     printArray(arr, SIZE);
//     return 0;
// }