// #include <stdio.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS
// #define N 4
// #define M 3
//
//
// int *merge2SortedArrays(int *a, int *b, int n, int m) {
//     int i=0, j=0, k=0;
//     int *c;
//     while(i<N && j<M) {
//         if (a[i]<b[j]) {
//             c[k]=a[i];
//             i++;
//             k++;
//         }
//         else {
//             c[k]=b[j];
//             j++;
//             k++;
//         }
//     }
//     // Copying all the elements of array a
//     while(i<N) {
//         c[k]=a[i];
//         i++;
//         k++;
//     }
//     // Copying all the elements of array b
//     while(j<M) {
//         c[k]=b[j];
//         j++;
//         k++;
//     }
//     return c;
// }
//
// int main() {
//
//     int a[N] = {1,3,4,6};
//     int b[N] = {2,5,7};
//     //int c[M+N];
//     int *c = merge2SortedArrays(a,b,N,M);
//
//     return 0;
// }