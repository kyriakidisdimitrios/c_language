// #include <stdio.h>
// #include <stdlib.h>
//
//
// int main(void) {
//     // int grade1=80, grade2=100;
//     // printf("Grade1 VALUE = %d\n", grade1); //%d on printf shows the value
//     // printf("Grade1 address = %p\n", &grade1); //%p on printf preimenei dieu8unsh 16adikh
//     //
//     //
//     // printf("Grede2 VALUE = %d", grade2);
//
//     int num1=5, num2 = 7;
//     int *ptrA, *ptrB;
//
//     printf("num1=%d, num2 = %d \n", num1, num2); //5, 7
//
//     ptrA = &num1;
//     ptrB = &num2;
//
//     printf("num1=%d, num2 = %d \n", num1, num2); //5, 7
//
//     *ptrA = *ptrA+1;
//     *ptrB = *ptrB+3;
//
//     printf("num1=%d, num2 = %d \n", num1, num2); //6, 10
//
//     ptrA = ptrB; //ptrA->num2, ptrB->num2
//     ptrB = ptrA; //ptrB ->num2
//
//     printf("num1=%d, num2 = %d \n", num1, num2); //6, 10
//     printf("ptrA=%d, ptrB = %d \n", *ptrA, *ptrB); //10,10
//
//      num1 = *ptrB; //10
//      num2 = num1 -3; //7
//
//     printf("num1 = %d, num2 = %d\n", num1, num2); //10, 7
//
//
//
//     return 0;
//
//
//
// }