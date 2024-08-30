// #include <stdio.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS
//
//
// /*
//  * struct{
//  *      type[member_name]: width;
//  * };
//  */
//
// struct BitFieldExample {
//    //unsigned int field = 1;
//     unsigned int field1 : 1; //1 bit
//     unsigned int field2 : 2; //2 bits
//     unsigned int field3 : 3; //3 bits
// };
//
// //Practical code example in C
//
// int main() {
//     struct BitFieldExample structExample;
//
//     structExample.field1 = 1; //can store values 0-1
//     structExample.field2 = 3; //can store values 0-3
//     structExample.field3 = 7; //can store values 0-7
//
//     printf("fields1: %u, field2: %u, field3: %u\n", structExample.field1,
//         structExample.field2,
//         structExample.field3);
//     return 0;
// }