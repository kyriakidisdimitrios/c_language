// #include <assert.h>
// #include <stdio.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS
//
// //Develop a function that recieves an array (sourceArr) of integers and its size(n).
// //The values in sourceArr are not negative and greater than n
//
// //The function should return the largest missing values in the array (<=n)
// //Note: The function should be efficient (without nested loops).... You can use an auxiliery memory to find the solution
//
// //example 2,1,3,2,4,2,7 n=7-> Functions values {0-7} The function should return 6
// //example 2,1,2,4,5,6,7 n=7-> Functions values {0-7} The function should return 3
//
// int findLargestMissingValue(int *sourceArr, int n) {
//     int *countArr;
//     int i;
//     countArr = (int*)calloc((n+1), sizeof(int)); //0...n
//     assert(countArr);
//
//     for (int i=0;i<n;i++)
//         countArr[sourceArr[i]]++;
//
//     for (i = n; i>= 0; i--)
//         if(countArr[i] == 0) { //if no instances
//             free(countArr);
//             return i; //return the actual index
//         }
//     free(countArr);
//     return -1;
// }
// int main() {
//     int result;
//     int array[7] ={2,1,3,2,4,2,7};
//     result = findLargestMissingValue(array, 7);
//     printf("%d", result);
//     return 0;
// }
//
//
//
