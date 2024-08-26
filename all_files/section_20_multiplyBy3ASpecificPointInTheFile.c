// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// typedef struct point {
//     int x;
//     int y;
// }Point;
// void mulPointBy3(char* filename, unsigned int choice) {
//     FILE* fp = fopen(filename, "rb+");
//     Point p;
//     //goal: find the relevant point in  our file
//     if (fp!=NULL) {
//         fseek(fp, (choice-1)*sizeof(Point),SEEK_SET);
//         fread(fp, sizeof(Point), 1, fp);
//         p.x *= 3;
//         p.y *= 3;
//         //one of those above
//         //fseek(fp, (choice -1) * sizeof(Point), SEEK_SET);
//         fseek(fp, (-1)*(int)sizeof(Point), SEEK_CUR);
//         fwrite(&p, sizeof(Point),1, fp);
//         fclose(fp);
//     }
//
// }
// // Random access to file with fseek
// int main(void) {
//
//
//     return 0;
// }