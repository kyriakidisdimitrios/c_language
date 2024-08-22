// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
//
// int main() {
//     char charsArray[]={'H','e','l','l','o','\0'}; //Option 1
//     char str[] = "Hello"; //Option 2
//     char *str2 = "Hello"; //Option 3
//
//     char *tempPtr;
//     tempPtr = charsArray; //we make pointer access the array of elements
//     tempPtr[0] = 'G'; //Gello
//
//
//
//     printf("String printed from charsArray: %s \n", charsArray);
//     printf("String printed from tempPtr: %s \n", tempPtr);
//
//     printf("str before= %s \n", str);
//     printf("str2 before= %s \n", str2);
//
//     str2 = "Good-bye";
//     //str = "Gooye";
//     str2[0] ='S'; //ERROR
//     str[0] ='S'; //the address it holds is not in a read only memory
//     //this does not change the 'Hello', but it points to somewhere else in essence
//
//     printf("str before= %s \n", str);
//     printf("str2 after= %s \n", str2);
//
//     return 0;
// }