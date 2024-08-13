// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// //recursion practice. Develop a recursive functuion that recieces an integer value "n".
// //the function should print the value "n" in Binary-Representation (base 2).
// //example:
// // "n" = 4-> 100
// // "n" = 6-> 110
// // "n" = 12-> 1100
//
// void printInBinary(int n) {
//     if (n>1) {
//         printInBinary(n / 2);
//     }
//     printf("%d", n%2);
// }
// int main() {
//     int num=10;
//     printInBinary(num);
//     printf("\n");
//     return 0;
// }