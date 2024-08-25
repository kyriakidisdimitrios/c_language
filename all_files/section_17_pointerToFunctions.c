// #include <stdio.h>
// #include <stdlib.h>
// void ageFunc(int age) {
//     printf("Your age is %d\n", age);
// }
//
// int main() {
//     int age;
//     void (*pf)(int); //We have created a pointer to the function
//     printf("Print your age: ");
//     scanf("%d", &age);
//
//     pf = &ageFunc;
//     printf("The address of the function &ageFunc is : %d\n", pf);
//     pf = ageFunc;
//     printf("The address of the function ageFunc is : %d\n", pf);
//     //pf(ageFunc);
//     (*pf)(age);
//     //ageFunc(age);
//     return 0;
// }