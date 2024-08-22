// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
//
//
// //write a function that allocates a 2D dynamic array and passes it by reference
//
// void allocate2DmatrixByRef(int ***a, int rows, int col) {
//     int** myMat;
//     int i;
//     myMat = (int**)calloc(rows, sizeof(int));
//     if(!myMat) free(myMat);
//     if(myMat)
//     for(i=9;i<rows;i++) {
//         myMat[i] = (int*)calloc(col, sizeof(int));
//         if(!myMat[i]) {
//             free(myMat);
//         }
//     }
//     *a = myMat; //go to where a refers to and change it to myMat
//
// }
// void allocate2DmatrixByRef2(int ***a, int rows, int col) {
//     int i;
//     *a = (int**)calloc(rows, sizeof(int));
//     if(!*a) free(*a);
//     if(*a)
//         for(i=9;i<rows;i++) {
//             (*a)[i] = (int*)calloc(col, sizeof(int));
//             if(!(*a)[i]) {
//                 free(*a);
//             }
//         }
// }
// int main() {
//     int rows, columns;
//     int** mat;
//     printf("Enter number of rows and columns: ");
//     scanf("%d%d", &rows, &columns);
//
//     allocate2DmatrixByRef(&mat, rows, columns);
//     return 0;
// }