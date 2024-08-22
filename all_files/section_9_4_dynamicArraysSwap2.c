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
// void swapRows(void **a, int row1, int row2) { //swap row1 and row2
//     //unsigned temp;
//     void* temp; //because unsigned is integer type becayse
//     temp = a[row1];
//     a[row1] = a[row2];
//     a[row2] = temp;
// }
// void swapColumns(int **a, int column1, int column2,int totalRows) {
//     int i;
//     int temp;
//     for(i=0;i<totalRows;i++) {
//         temp=a[i][column1];
//         a[i][column1] = a[i][column2];
//         a[i][column2]= temp;
//     }
//
// }
// int main() {
//
// }