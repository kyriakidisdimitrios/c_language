// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 3
//
//
// //write recursive function that recieves an array of floating point numbers (>0) and its size
// //returns "1" if fir abt 2 adjacent elements in the arrat the "integer parts" are sorted in ascending order,
// //and the "fractional parts" are sorted in descending order.
// //return "0", otherwise
//
// //example 1.4, 3.25, 4.5 returns 0
// //example 1.4, 3.25, 4.2 returns 1
//
// int isSpecialFloatingSorted(double* arr, int size) {
//     int leftInteger, rightInteger;
//     double leftFractional, rightFractional;
//     if (size==1) return 1;
//     leftInteger = (int)arr[0];
//     rightInteger = (int)arr[1];
//
//     leftFractional =  arr[0] - leftInteger;
//     rightFractional =  arr[1] - rightInteger;
//
//     if(leftInteger <= rightInteger && leftFractional>=rightFractional){
//         return isSpecialFloatingSorted(arr+1,size-1);
//     }
//     else return 0;
// }
// int isSpecialFloatingSorted2(double* arr, int size) {
//     if (size==1) return 1;
//     if((int)arr[0] <= (int)arr[1] && (arr[0] - (int)arr[0])>=(arr[1] - (int)arr[1])){
//         return isSpecialFloatingSorted(arr+1,size-1);
//     }
//     else return 0;
// }
// int main() {
//     int array[SIZE]={1.4, 3.25, 4.2};
//     int result = isSpecialFloatingSorted2(array, SIZE);
//     printf("%d",result);
//     return 0;
// }