// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 5
//
// //recursive function tgat recieves array of integers "arr" and its size
// //should return 1 if the array is a palindrome, otherwise 0.
//
// //"121"-->1
// //"12342"-->0
// //"987789"-->1
//
// int isPalindrome(int *pArr, int size) {
//     if(size<1) return 1;
//     if (pArr[0] != pArr[size-2]) return 0;
//     else return isPalindrome(pArr+1, size-2);
// }
//
// int main() {
//     int array[SIZE] = {1,2,3,2,1};
//     int isPal = isPalindrome(array, SIZE);
//     printf("Array is %sPalindrome", !isPal ?  "" : "is not");
//     return 0;
// }
