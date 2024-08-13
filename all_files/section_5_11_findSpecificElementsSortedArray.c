// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 7
//
// //find function that recieves a sorted (smallest to largest) array of elements and also recieves a value
// //should fiund if there is a sum of 2 elements in the arrat that bequals to the recieved "value".
// //if there are such elements, then return 1, and pass their indexes
// //else return 0 and pass for both of them the value 0.
//
//
//
// int findIf2ElementsSum(int* pArr, int size, int value, int *iPtr, int *jPtr) {
//     int i,j;
//     for(i=0;i<size;i++) {
//         for(j=i;j<size;j++) {
//             if (pArr[i]+ pArr[j] ==value) {
//                 *iPtr=i;
//                 *jPtr=j;
//                 return 1;
//             }
//         }
//     }
//     *iPtr = 0;
//     *jPtr = 0;
//     return 0;
// }
// int findIf2ElementsSumOptimised(int* pArr, int size, int value, int *iPtr, int *jPtr) {
//     int i = 0,j = size -1, currentSum;
//     while(i<j) {
//         currentSum =  pArr[i] + pArr[j];
//         if (currentSum == value) {
//             *iPtr = i;
//             *jPtr = j;
//             return 1;
//         }
//         else if(currentSum < value) i++;
//         //else if(currentSum < value) j--;
//         else j--;
//     }
//     *iPtr = 0;
//     *jPtr = 0;
//     return 0;
// }
//
// int main() {
//     int arr[SIZE] = {1,2,3,8,11,17,22};
//     int i=0, j =0;
//     int solution = findIf2ElementsSum(arr, SIZE,10, &i, &j);
//     printf("there are elements: %d\n",solution);
//     printf("indexes: %d %d\n",i, j);
//     printf("numbers: %d %d\n",arr[i], arr[j]);
//     return 0;
// }