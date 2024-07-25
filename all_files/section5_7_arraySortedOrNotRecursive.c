// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 5
// /*  write a function that checks if the array is "really sorted", "sorted", "not sorted"
//     should return 1 and pass 1 by reference if the array is "really sorted"
//     should return 1 and pass 0 by reference if the array is "sorted"
//     should return 0 and pass 0 by reference if the array is "not sorted"
//
//     example1: [1,2,5,7,10]-> really sorted R-1, P-1 // fpr any pair: left element < right element
//     example2: [1,2,5,7,10]-> sorted R-1, P-0 // fpr any pair: left element <= right element
//     example3: [1,2,5,7,10]-> not sorted R-0, P-0
// */
// int checkIsSorted(int *pArr, int size, int *rs) {
//
// }
// //recursive approach - solution
// //recursive calls (with some logic behind them)
// //base/stopping condition
//
//
// int checkIsSortedRecursive(int *arr, int size, int *rs) {
//     int result; //return result                                            //1 result
//     if (size ==1){  //the array has jsut 1 element                         //2 stopping condition
//         *rs =1; // we will assume the array is really sorted               //3
//         return 1;
//     }
//     result = checkIsSortedRecursive(arr, size-1, rs);
//     if(result!=0 && arr[size-1] == arr[size-2]) { //if the array is really sorted and the last elements are equal
//         *rs=0;
//     }
//     if(result!=0 && arr[size-1] < arr[size-2]) { //if the array is really sorted and the element of the right is less that the element on the left
//         *rs=0;
//         return 0;
//     }
//     return result;
//     //result = checkIsSortedRecursive(arr, size-1, &rs); is wrong because rs is already a pointer
// }
// int main() {
//     return 0;
// }