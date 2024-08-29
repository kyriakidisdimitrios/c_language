// #include <stdio.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS
//
// //Develop a functiuon that recieves a sequence of natural numbers("sourceArr") and its size ("size").
// //The values in sourceArr are between "0" up to "size".
//
// //The function should return a * (dominant) value (if it exists). Otherwise, return -1.
//
//
// //A dominant value is a value whose number of appearances in the array is greater than half of the array
// //(greater than half of the size of the array).
// //e.g If array is size 5, then dominant has to be at least 3 times
//
// //3,5,4,3,3 ->the function should return 3
// //3,5,4,2,3 ->returns -1
//
// #include <stdlib.h>
//
// // Function to find the dominant value
// int findDominantValue(int *arr, int arrLength, int size) {
//     // Allocate freqArr with size + 1 to cover all possible values from 0 to size
//     int* freqArr = (int*)calloc(size + 1, sizeof(int));
//     if (freqArr == NULL) {
//         return -1; // Allocation failed
//     }
//
//     // Count frequencies of each value in arr
//     for (int i = 0; i < arrLength; i++) {
//         if (arr[i] > size) {
//             free(freqArr); // Free allocated memory
//             return -1; // Invalid value in array
//         }
//         freqArr[arr[i]]++;
//     }
//
//     // Check for dominant value
//     for (int i = 0; i <= size; i++) {
//         if (freqArr[i] > arrLength / 2) {
//             free(freqArr); // Free allocated memory
//             return i; // Dominant value found
//         }
//     }
//
//     free(freqArr); // Free allocated memory
//     return -1; // No dominant value found
// }
//
// int main() {
//     int arr[5] = {3, 5, 4, 3, 3};
//     int result = findDominantValue(arr, 5, 5);
//     printf("Dominant value: %d\n", result); // Print the result
//     return 0;
// }