// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 4//
//
// int secondsmallest(int* pArr, int size) {
//     int i, smallest=INT_MAX, second=INT_MAX;
//     for(i=0;i<size;i++) {
//         if(smallest>pArr[i]) smallest=pArr[i];
//     }
//
//     for(i=0;i<size;i++) {
//         if(second>pArr[i] && second!=smallest) second=pArr[i];
//     }
//     return second;
// }
// int main() {
//     int arr[SIZE] = {3,3,1,8};
//     int second = secondsmallest(arr, SIZE);
//     printf("%d\n",second);
//     return 0;
// }