// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 3
//
// void minmax(int *pArr, int size, int* minValue, int* maxValue) {
//     int i;
//     *minValue = pArr[0];
//     *maxValue = pArr[0];
//     for (i=1;i<size;i++) { //we already have the 0
//         if (pArr[i] < *minValue) {
//             *minValue = pArr[i];
//         }
//         if (pArr[i] > *maxValue) {
//             *maxValue = pArr[i];
//         }
//     }
//
// }
//
// int main() {
//     int myGrades[] = {80,90,100};
//     int min, max;
//     minmax(myGrades, SIZE, &min, &max);
//     printf("The maximum value in your grades: %d\n", max);
//     printf("The minimum value in your grades: %d\n", min);
//     return 0;
// }