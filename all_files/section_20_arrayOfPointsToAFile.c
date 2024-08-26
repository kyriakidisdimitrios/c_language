// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// typedef struct point {
//     int x;
//     int y;
// }Point;
// int main(void) {
//     Point pointsArr[5]={{1,2,},{3,4},{5,6},{7,8},{9,10}};
//     FILE* fp = fopen("myFile3.bin", "wb");
//     if (fp!=NULL) {
//         printf("File was successfully opened for the binary writing.. \n");
//         //Option #!
//         for (int i=0;i<5;i++)
//             fwrite(&pointsArr[i], sizeof(Point), 1,fp);
//         fclose(fp);
//
//         //Option #2
//         // int writtenElemets = fwrite(pointsArr, sizeof(Point), 5, fp) //pointsArr is the address of &pointsArr[0];
//         // fclose(fp);
//     }
//     return 0;
// }