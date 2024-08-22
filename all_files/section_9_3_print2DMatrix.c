// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// void freeMatrix(int **a,rows) {
//     //free(a); this is wrong, and we will loose connection to the address
//
//     int i;
//     for(i=0;i<rows;i++) {
//         free(a[i]);
//     }
//     free(a); // now we free
//
// }
//
// void print2DDynamicMatrix(int **a, int rows, int columns) {
//     int i,j; // "i" will be used to iterate overs rows, "j" will be used to iterate over columns
//     for(i=0;i<rows;i++) {
//         for(j=0;j<columns;j++) {
//             //a[i][j]
//             printf("%10d", a[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main() {
//     //Create Matrix
//     //Assign Values
//     //Print Matrix
//
//
// }