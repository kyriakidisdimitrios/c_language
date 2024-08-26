// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// typedef struct point {
//     int x;
//     int y;
// }Point;
//
// //exercise #1 - Writing a Point Struct to a file
// int main() {
//     Point p = {3,5};
//     FILE * fp = fopen("myFile.bin", "wb"); //write binary
//     if (fp!=NULL) {
//         printf("File was successfully opened for binary writing... \n");
//         fwrite(&p, sizeof(Point), 1, fp);
//         fclose(fp);
//     }
//     return 0;
// }