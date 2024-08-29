// #include <stdio.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS
//
// //Develop a function that recievers an array of integers, its size, and some value "K"
// //The array consists of values between "0" and "k" (included).
//
// //The function should check and return 1, if the number of occurances of any value in the array equals
// //the value itself. Otherwise, return 0.
//
// //e.g 0,2,2,1,4,2 and k=4
// //this function should return 0
//
// //e.g. 3,2,2,1,3,3 amd k=3
// //this function returns 1 because we have 1 occurance of 1, 2 occurances of number 2 and 3 occurances of number 3
//
// int FreqAsValue(int* arr, int arrLength, int k) {
//     // Allocate and initialize the frequency array
//     int* freqArr = (int*)calloc(k + 1, sizeof(int));
//     if (freqArr == NULL) {
//         return 0; // Allocation failed
//     }
//
//     // Fill the frequency array
//     for (int i = 0; i < arrLength; i++) {
//         if (arr[i] > k) {
//             free(freqArr);
//             return 0; // Value out of bounds
//         }
//         freqArr[arr[i]]++;
//     }
//
//     // Check if any value's frequency matches the value itself
//     for (int i = 0; i <= k; i++) {
//         if (freqArr[i] == i) {
//             free(freqArr);
//             return 1; // Found a match
//         }
//     }
//
//     free(freqArr);
//     return 0; // No match found
// }
//
// int main() {
//     int arr[6] = {3, 2, 2, 1, 3, 3};
//     int k = 3; // Example 2
//     int result = FreqAsValue(arr, 6, k);
//
//     if (result == 0) {
//         printf("Not correct\n");
//     } else {
//         printf("Correct\n");
//     }
//
//     return 0;
// }