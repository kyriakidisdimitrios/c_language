// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// /*implement 2 functions that recieve a Dynamic 2D array(pointer to pointer..)
// a. first function should recieve 2 rows.
// the function should SWAP between the 2 rows in O(1). Make it Universal.
// b. Second function should recieve 2 columns.
// The function should SWAP between the 2 columns in O(N)
// */
//
// void swap2DRows(void **a, unsigned row1, unsigned row2) { //swap row1 and row2
//     //unsigned temp;
//     void* temp; //because unsigned is integer type becayse
//     temp = a[row1];
//     a[row1] = a[row2];
//     a[row2] = temp;
// }
// void swap2DColumns(int **a, int column1, int column2, int numRows) {
//     //swap column1 and column2
//     for (int i=0;i<numRows;i++) {
//         int temp = a[i][column1];
//         a[i][column1]=a[i][column2];
//         a[i][column2]=temp;
//     }
// }
// int **createMatrix() {
//     int numRows = 5;
//     int numColumns = 5;
//     int **a = (int**)calloc(numRows, sizeof(int*));
//     if (!a) return NULL;
//     for(int i = 0; i < numRows; i++) {
//         a[i] = (int*)calloc(numColumns, sizeof(int));
//         if (!a[i]) {
//             for(int j = 0; j < i; j++) {
//                 free(a[j]);
//             }
//             free(a);
//             return NULL; // Allocation failed
//         }
//     }
//     return a;
// }
//
// void freeMatrix(int **a, int rows) {
//     for (int i = 0; i < rows; i++) {
//         free(a[i]);
//     }
//     free(a);
// }
// int main() {
//     int **matrix = createMatrix();
//     if (!matrix) {
//         fprintf(stderr, "Matrix allocation failed\n");
//         return 1;
//     }
//
//
//     int *value=(int*)malloc(sizeof(int)); //create a sample value
//     if (!value) {
//         fprintf(stderr, "Value allocation failed\n");
//         freeMatrix(matrix,5);
//         return 1;
//     }
//     *value = 52;
//
//     matrix[0][0] = *value; //asign the value to the matrix
//
//
//     int retrievedValue = matrix[0][0];
//     printf("Value: %d\n", (int)retrievedValue);
//
//     swap2DColumns(matrix, 0,1,5);
//     swap2DRows((void**)matrix, 0,1);
//     free(value);
//     freeMatrix(matrix, 5);
//     return 0;
// }