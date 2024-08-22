// #include <stdio.h>
// #include <stdlib.h>
//
// // strlen function: receives a string and returns its length
// int my_strlen(char* str);
//
// // strcat function: concatenates two strings and returns the new concatenated string
// char* my_strcat(char* str, char* str2);
//
// char* my_strcpy(char* str, char* str2);
//
// int main() {
//     char name[5] = "Tech";
//     printf("name length: %d \n", my_strlen(name));
//
//     char strDestination[20] = "Hello";
//     char strSource[] = "World";
//     char *concatinatedChar = my_strcat(strDestination, strSource);
//
//     printf("string after concatenation: %s \n", concatinatedChar);
//     free(concatinatedChar);  // Free the dynamically allocated memory
//
//     char str1[5] = "Tech";
//     char str2[10];
//    int *tempResult = my_strcpy(str2, str1);
//     printf("str1 = %s", str1);
//     printf("\n");
//     printf("str2 = %s", str2);
//
// }
//
// int my_strlen(char* str) {
//     int i = 0;
//     while (str[i] != '\0') {
//         i++;
//     }
//     return i;
// }
//
// char* my_strcat(char* str, char* str2) {
//     int i = my_strlen(str);   // Length of first string
//     int j = my_strlen(str2);  // Length of second string
//
//     // Allocate memory for the concatenated string (+1 for null terminator)
//     char* str3 = (char*)malloc(i + j + 1);
//
//     // Copy the first string into str3
//     for (int x = 0; x < i; x++) {
//         str3[x] = str[x];
//     }
//
//     // Append the second string into str3
//     for (int y = 0; y < j; y++) {
//         str3[i + y] = str2[y];
//     }
//
//     // Null-terminate the concatenated string
//     str3[i + j] = '\0';
//
//     return str3; //this returns the address of the first element
// }
// char* my_strcpy(char* str, char* str2) {
//     //we have tio be sure that there is enough memory in str
//
//     char *tempPtr;
//     int i=0;
//     tempPtr = str;
//
//     while(str2[i]!='\0') {
//         str[i] = str2[i];
//         i++;
//     }
//     str[i] = '\0';
//     return tempPtr;
// }