// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// //2D Dynamically allocated arrays
//
// int **allocate2DMatrix() {
//     int **a;
//     int rows, columns;
//     int i;
//     printf("Enter number of rows to the 2D matrix");
//     scanf("%d", &rows);
//     a = (int**)calloc(rows, sizeof(int*));
//     if (!a) return NULL;
//     for (i=0;i<rows;i++) { //allocating anb array of integer for every row
//         printf("Enter number of columns for the row: ", i+1);
//         scanf("%d", columns);
//         a[i]=(int*)calloc(columns, sizeof(int));
//         if(!a[i]) {
//             // #TODO --> freeMatrix
//             return NULL;
//         }
//     }
//     return a;
//
// }
// int **allocate2DMatrix2(int *rows, int *columns) {
//     int **a;
//     int i;
//     printf("Enter number of rows to the 2D matrix");
//     scanf("%d", &rows);
//     a = (int**)calloc(rows, sizeof(int*));
//     if (!a) return NULL;
//     // Allocate memory for each row
//     for (i = 0; i < *rows; i++) {
//         a[i] = (int*)calloc(*columns, sizeof(int));
//         if (!a[i]) {
//             // If allocation fails, free already allocated memory
//             for (int j = 0; j < i; j++) {
//                 free(a[j]);
//             }
//             free(a);
//             return NULL;
//         }
//     }
//
//     return a;
// }
// int main() {
//     int** myMatrix;
//     int rows, columns;
//
//     myMatrix = allocate2DMatrix2(&rows, &columns);
// }
