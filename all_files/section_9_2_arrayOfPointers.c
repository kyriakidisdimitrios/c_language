// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// //array of pointers
//
// int main() {
//     //user to choose number of rows and columns
//
//     int** a;
//     int rows, columns;
//     int i;
//     printf("how many rows");
//     scanf("%d", rows);
//     a = (int**) calloc(rows, sizeof(int*));
//     for(i=0;i<rows;i++){
//         printf("how many columns");
//         scanf("%d", columns);
//         a[i]=(int*)calloc(columns, sizeof(int));
//     }
//
//
//     // int *arr[5]; //arr represents address of arr[0]
//     // int i;
//     // int numberofColumnns;
//     // for (i=0;i<5;i++) {
//     //     printf("Please enter number of columns for this row: ");
//     //     scanf("%d", &numberofColumnns);
//     //     arr[i] = (int*)calloc(numberofColumnns,sizeof(int));
//     // }
//
//
//     //int *arr[5]; //arr represents address of arr[0]
//     // int i;
//     // for (i=0;i<5;i++) {
//     //     arr[i] = (int*)calloc(3,sizeof(int));
//     // }
//     // //arr[1][1]=30; //it will go to arr row 1 and column 1
//     // scanf("%d", &arr[0][2]);
//
//     // arr[0] = (int*)calloc(1, sizeof(int));  //this can happen only on the dynamic allocation
//     // arr[1] = (int*)calloc(2, sizeof(int));
//     // arr[2] = (int*)calloc(2, sizeof(int));
//
//
// }