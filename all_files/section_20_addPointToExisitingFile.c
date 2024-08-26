// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
//
// typedef struct point {
//     int x;
//     int y;
// }Point;
//
// void addPoint(char* filename, Point newPoint) {
//     FILE* fp =fopen(filename, "ab"); //append binary
//     if (fp!=NULL) {
//         fwrite(&newPoint, sizeof(Point), 1, fp);
//         fclose(fp);
//     }
//     else
//         printf(("File was not opened..\n");
// }