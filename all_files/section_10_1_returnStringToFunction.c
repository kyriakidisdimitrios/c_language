// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// //write a function that recieves a string - Alpha
// // returns a concatenated string  - AlphaAlpha_
//
// char* strConcat(char *originalStr);
//
// int main() {
//
//     return 0;
// }
//
// char* strConcat(char *originalStr) {
//     char *newStr;
//     int i;
//     int lengthOriginal = strlen(originalStr); //strlen returns length of the string
//     newStr = (char*)malloc(2*lengthOriginal*sizeof(char) +1);
//     for(i=0;i<strlen(newStr);i++) {
//         newStr[i]=originalStr[i];
//         newStr[i+lengthOriginal]=originalStr[i];
//     }
//     newStr[i+lengthOriginal] = '\0';
//     return newStr;
// }