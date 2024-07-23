#include <stdio.h>
#include <stdlib.h>
int findMax(int num1, int num2) {
    if (num1>num2) return num1;
    else return num2;
}
int findMin(int num1, int num2) {
    if (num1>num2) return num2;
    else return num1;
}
// int findMinMax(int num1, int num2) {
//     int min, max;
//     if (num1>num2) {
//         min =  num2;
//         max = num1;
//     }
//     else {
//         min = num1;
//         max = num2;
//     }
//     //return min, max; //return of 2 parameteres is forbiden
// }

void findMinMax(int num1, int num2, int *pMax, int *pMin) {
    int min, max;
    if (num1>num2) {
        *pMin = num2;
        *pMax = num1;
    }
    else {
        *pMin = num1;
        *pMax = num2;
    }
    //no need to retun
}
int main() {
    int a =5, b = 7;
    int max, min;
    // max = findMax(a,b);
    // min = findMin(a,b);
    // printf("max between %d %d = %d\n", a,b,max);
    // printf("min between %d %d = %d\n", a,b,min);

    findMinMax(a,b,&max, &min);
    printf("max between %d %d = %d\n", a,b,max);
    printf("min between %d %d = %d\n", a,b,min);

    return 0;
}

