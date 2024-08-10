// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// int SIZE;
// int *createArray();
// void printArr(int *arr, int size) {
//     int i;
//     for (i=0;i<size;i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
//
// int main() {
//     int *arr;
//     arr = createArray();
//     printArr(arr,SIZE);
// }
//
// int *createArray() {
//     int i;
//     //int myArr[SIZE]; //we cannot do this because SIZE is later been set.
//     int *myArr; //so we build a pointer
//     myArr = (int *)malloc(SIZE*sizeof(int)); //5*4 20 bytes allocated dynamically on the heap, returns the address of the 1st eleemnt
//     //we use (int *) because myArr is pointer to int
//
//     if(!myArr){
//         printf("You've got some error when you try to allocate, check your memory\n");
//         exit(1);
//     }
//     printf("Enter size of the array.\n", SIZE);
//
//     for(i=0;i<SIZE;i++) {
//         printf("Enter number of %d: ", i);
//         scanf("%d", &myArr[i]);
//     }
//     return myArr;
// }