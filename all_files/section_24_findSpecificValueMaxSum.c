// #include <stdio.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS
//
// //
// // Develop a functiuon that recieves an array of integers and its size
// // The values in sourceArr are between 0 up to size.
//
// //e.g. 2,1,3,2,4,2,1 size if 7 -> function Values {0-7}
// //The function should return '2' because sum of 2's is Maximum = 6
//
// //e.g. 2,1,3,2,4,2,7 size if 7 -> function Values {0-7}
// //The function should return '7' because sum of 7's is Maximum = 7
//
// int findSpecificValueMaxSum(int *arr, int size, int arrLenght) {
//     int* arrSum = (int*)calloc(size+1, sizeof(int));
//     if (arrSum == NULL) {
//         return -1;
//     }
//     for (int i=0;i<size;i++) {
//         if (arr[i]>7) {
//             free(arrSum);
//             return -1;
//         }
//         arrSum[arr[i]]+=arr[i];
//     }
//     // Find the value with the maximum sum of occurrences
//     int maxSum = -1;
//     int result = -1;
//     for (int i = 0; i <= size; i++) {
//         if (arrSum[i] > maxSum) {
//             maxSum = arrSum[i];
//             result = i;
//         }
//     }
//
//     free(arrSum); // Free allocated memory
//     return result; // Return the value with the maximum sum of occurrences
// }
// int main() {
//     int arr[7]= {2,1,3,2,4,2,1};
//     printf("%d\n", findSpecificValueMaxSum(arr, 7, 7));
//     return 0;
// }