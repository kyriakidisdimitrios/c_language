// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 5
//
// /*  write a function that checks if the array is "really sorted", "sorted", "not sorted"
//     should return 1 and pass 1 by reference if the array is "really sorted"
//     should return 1 and pass 0 by reference if the array is "sorted"
//     should return 0 and pass 0 by reference if the array is "not sorted"
//
//     example1: [1,2,5,7,10]-> really sorted R-1, P-1 // fpr any pair: left element < right element
//     example2: [1,2,5,7,10]-> sorted R-1, P-0 // fpr any pair: left element <= right element
//     example3: [1,2,5,7,10]-> not sorted R-0, P-0
// */
// int sortedArrayCheck(int *pArr, int size, int *rs) {
//     int i=0;
//     for(i=1;i<size;i++) {
//
//         if (pArr[i]<=pArr[i-1]) *rs = 0;
//         if (pArr[i]<pArr[i-1]) {
//             *rs = 0;
//             return 0;
//         }
//     }
//     return 1;
// }
//
//
// int main() {
//     int array[] = {1,2,5,7,10};
//     int rs = 1;
//     sortedArrayCheck(array,SIZE, &rs);
//     return 0;
// }
