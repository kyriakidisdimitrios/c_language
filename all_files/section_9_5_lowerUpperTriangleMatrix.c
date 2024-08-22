// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
//
// //write 2 functions that should
// // 1. create a lower triangular matrix and return it.
// // 2. create an upper triangular matrix and return it.
//
// void printLowerTriangular(int** a, int n) {
//     int i, j;
//     for (i = 0; i < n; i++) {
//         for (j=0;j<n;j++) { //associated with a row
//             if(i<j) printf(0);
//             else printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }
// }
// void printUpperTriangular(int** a, int n) {
//     int i, j;
//     for (i = 0; i < n; i++) {
//         for (j=0;j<n;j++) { //associated with a row
//             if(i>j) printf(0);
//             else printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }
// }
// int **createLowerTriangular(int n) {
//     int **a;
//     a = (int**)malloc(n*sizeof(int*));
//     for (int i = 0; i < n; i++) {
//         a[i]=(int*)malloc((i+1)*sizeof(int)); //0->1, 1->2 ...
//     }
//     return a;
// }
// int **createUpperTriangular(int n) {
//     int **a;
//     a = (int**)malloc(n*sizeof(int*));
//     for (int i = 0; i < n; i++) {
//         a[i]=(int*)malloc((n-i)*sizeof(int)); //0->n, 1-> n-1
//     }
//     return a;
// }
// int main() {
//
//     return 0;
// }