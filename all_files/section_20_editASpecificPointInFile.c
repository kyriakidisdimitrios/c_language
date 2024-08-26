// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// typedef struct point {
//     int x;
//     int y;
// }Point;
//
// // Exercise #5 - Edit a specific point in the file
// int main(void) {
//     Point m_point;
//     int choice;
//
//     printf("What is the point you would like to edit? (1-5)\n");
//     //Opening an existing file for both "reading" and "writing".
//
//     FILE* fp = fopen("myFile3.bin", "rb+"); //+ means it is both for reading and writing.
//     if (fp!=NULL) {
//         //Navigate to relecant address if the specific point in the file.
//         fseek(fp, (choice -1) * sizeof(Point), SEEK_SET); //SEEK_SET from start of the file
//         printf("The point was located in the file...");
//         //Get new coordinates for the point
//         printf("Enter a new x:");
//         scanf("%d", &m_point.x);
//         printf("Enter a new y:");
//         scanf("%d", &m_point.y);
//         //Update the record.
//         fwrite(&m_point, sizeof(Point), 1, fp);
//         fclose(fp);
//
//
//     }
//     return 0;
// }