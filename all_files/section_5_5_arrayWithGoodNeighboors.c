// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 5
// //working with neighboors!
// //write a function that recieves and array and its size.
// //return 1, if the array has some element which value equals to the sum of both its neighboors(rightm left).
// //return 0.
//
// //example #1 - [1,4,7,3,2] --> return 1;
// //example #2 - [1,4,1,4,2] --> return 1;
//
// bool goodNighboors(int *pArr, int size) {
//
//     for(int i=1;i<size;i++) {
//         if (pArr[i]==pArr[i-1] + pArr[i+1]) return true;
//     }
//     return false;
// }
// int main() {
//     int array[] = {1,4,8,3,2};
//     bool condition =goodNighboors(array, SIZE);
//     printf("The condition good neighboors is %s\n", condition ? "true" : "false");
//     return 0;
// }