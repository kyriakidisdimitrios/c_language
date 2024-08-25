// #define _CRT_SECURE_NO_WARNINGS;
// #include <stdio.h>
// #include <stdbool.h>
//
// //define 2 comparison functions
// //1 is ascending, and 1 is descending
// //return true, false if it is ascending or descending
// //sort (int *arr, int n, )
// //pointer function to either asc or desc
// //"main" define an interger array with values and call comparison function
//
// //Step 1: Creating Comparison Functions
// bool ascending(int a, int b) {
//     return a<b;
// }
// bool descending(int a, int b) {
//     return a>b;
// }
// //Step 2: Sorting Function
// void swap(int* ptr1, int *ptr2) {
//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
// }
// void sort(int *arr, int n, bool (*compare)(int, int)) {
//     int i, j;
//     for(i=0;i<n-1;i++) { //bubble sort
//         for(j=0;j<n-i;j++) {
//             if (!compare(arr[j],arr[j+1]))
//                 swap(&arr[j],&arr[j+1]);
//         }
//     }
// }
// // bool (*compare)(int, int) -> function pointer
//
// void printArray(int* arr, int n) {
//     int i;
//     printf("Array:\n");
//     for(i=0;i<n;i++)
//         printf("%d", arr[i]);
//     printf("==============\n\n");
// }
//
// int main() {
//     int arr[] = {5,2,8,9,1};
//     int n= sizeof(arr) / sizeof(int);
//     printArray(arr, n); //this didn't need &arr
//     sort(arr,n, ascending);
//     //acending is passed as function name, means that we
//     //passed the address of the first command, and this (*compare) is calling that function accordingly
//     printArray(arr, n);
//     sort(arr,n, descending);
//     printArray(arr, n);
//     return 0;
// }