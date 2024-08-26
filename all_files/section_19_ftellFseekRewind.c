// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
//
// //Using tell, seek, rewind functions in C prograqmming
// //ftell, fseek, rewind
//
// int main() {
//     int pos;
//     FILE* fp= fopen("myFile.text", "r");
//     // //assert
//     // pos = ftell(fp); //poisition 0
//     // printf("Position in the file = %d\n", pos);
//     // fgetc(fp); //goes to first character
//     // pos = ftell(fp); //position 1
//     // printf("Position in the file = %d\n", pos);
//     // fgetc(fp);
//     // pos = ftell(fp);
//     // printf("Position in the file = %d\n", pos);
//     // fclose(fp);
//     //fseek(fp, -5,SEEK_END);
//     rewind(fp);
//     fclose(fp);
//     return 0;
// }