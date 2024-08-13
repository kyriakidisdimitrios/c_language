// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 5
//
// //recieve 2 arrays of tge same size
// //swap between their values one by one --> O(n)
//
// void swap(int *val1, int *val2) {
//     int temp;
//     temp = *val1;
//     *val1 = *val2;
//     *val2 = temp;
// }
// void swapArrayO1(void **ptr1, void **ptr2) { //because Arr1 is not a simple integers, but a pointer to integer
//                                             //pointer to a pointer to integer. We use void because we use it as a universal abstraction
//     void *temp;  //otherwise it would be temp
//     temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
//
// }
// void swapArrayON(int *arr1, int *arr2) {
//     int i;
//     for (i=0; i<SIZE; i++) {
//         swap(&arr1[i], &arr2[i]);
//     }
// }
// void printArr(int *arr) {
//     int i;
//     for (i=0; i<SIZE; i++) {
//         printf("%d", arr[i]);
//     }
//     printf("\n");
// }
// int *generateArray(int size) {
//     int i;
//     int *arr;
//     arr = (int*)malloc(size*sizeof(int)); //(int*) casts the result of malloc to an int*, indicating that the memory allocated should be interpreted as a pointer to integers
//     for(i=0;i<size;i++)
//         scanf("%d", &arr[i]);
//     return arr;
// }
// int main() {
//     // int Array1[SIZE]={1,3,6,8,10};
//     // int Array2[SIZE]={2,2,4,11,17};
//     // printf("Array values BEFORE swap!\n");
//     // printArr(Array1);
//     // printArr(Array2);
//     // swapArrayON(Array1, Array2);
//     // printf("\n");
//     // printf("Array values AFTER swap!\n");
//     // printArr(Array1);
//     // printArr(Array2);
//     // return 0;
//
//     int *Arr1, *Arr2;
//     int sizeArr1, sizeArr2;
//     printf("Enter size for Array1!\n");
//     scanf("%d", &sizeArr1);
//     printf("Enter size for Array2!\n");
//     scanf("%d", &sizeArr2);
//     Arr2 = generateArray(sizeArr1);
//     Arr1 = generateArray(sizeArr2);
//
//     swapArrayO1(&Arr1, &Arr1); //we here send the addresses of the pointers themselves, not the addresses that pointers point
//
//     return 0;
// }