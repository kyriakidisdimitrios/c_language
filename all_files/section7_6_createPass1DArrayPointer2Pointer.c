// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
//
// void create1DArrayByRef(int **p, int size) {  //p is pointer to pointer of int (which is ptr)
//     int* newArr;
//     int i;
//     newArr = (int*)malloc(size * sizeof(int));
//     for(i=0;i<size;i++) {
//         printf("Enter value: ");
//         scanf("%d",&newArr[i]);
//     }
//     *p = newArr;
// }
//
// void create1DArrayByRef2(int **p, int size) {  //p is pointer to pointer of int (which is ptr)
//     int i;
//     //we can access ptr from pointer p
//     *p = (int*)malloc(size * sizeof(int));
//     for(i=0;i<size;i++) {
//         printf("Enter value: ");
//         scanf("%d",&(*p)[i]); //*p is ptr
//     }
//     //*p = newArr; //not needed
// }
//
// int main() {
//     int* ptr;
//     int size;
//     printf("Enter the size of the array");
//     scanf("%d",&size);
//
//
//     create1DArrayByRef(&ptr, size);
//
//     return 0;
// }