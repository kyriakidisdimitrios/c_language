// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 3
//
// //write a function called updateAverage, should recieve 2 values and update by reference the average (of the caller)
// //the function should not print/return anything
//
// void updateAverage(int* pArr, int size, double* avg) {
//     int i, sum=0; //sum should be declared as 0
//     for (i=0;i<size;i++) {
//         sum += pArr[i];
//     }
//     *avg = (double)sum/i;
// }
// int main(){
//     double average=0;
//     int array[SIZE]= {80,90,100};
//     updateAverage(array, SIZE, &average);
//     printf("%f", average); //%f is for double, %d is for integers
//     return 0;
// }