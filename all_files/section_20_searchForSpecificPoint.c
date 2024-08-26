// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// typedef struct point {
//     int x;
//     int y;
// }Point;
// // Exercise #4 - Search for a specific point in the file. Reading
// int main(void) {
//     Point targetPoint; //The point we're looking for
//     Point pointInFile; //Will be used to read a point from the file
//     FILE *fp= fopen("myFile3.bin", "rb");
//
//     printf("What is the point you're looking for?");
//     printf("Enter x:");
//     scanf("%d", &targetPoint.x);
//     printf("Enter y:");
//     scanf("%d", &targetPoint.y);
//     int i;
//     if(fp!= NULL) {
//         while(!feof) { //while we have not reached the end of the file
//             fread(&pointInFile, sizeof(Point), 1, fp); //similar to fwrite
//             if((pointInFile.x == targetPoint.x) && (pointInFile.y == targetPoint.y)) {
//                 printf("Your poiunt was found in the file!!\n");
//                 printf("Point number in file = %d!!\n", i);
//                 break;
//             }
//             i++;
//         }
//         fclose(fp);
//     }
//     return 0;
// }