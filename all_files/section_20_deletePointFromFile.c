// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
//
// typedef struct point {
//     int x;
//     int y;
// }Point;
//
// void addPoint(char* filename, int index) {
//     FILE* fp = fopen(filename, "rb");
//     if (fp!=NULL) {
//         printf("Failed to open the file\n");
//         return;
//     }
//     FILE* tempFP = fopen("temp.bin", "wb");
//     if (tempFP!=NULL) {
//         printf("Failed to open the temporary file\n");
//         fclose(fp);
//         return;
//     }
//     Point p;
//     int currentIndex = 1;
//     while(fread(&p, sizeof(Point),1,fp)) {
//         if(currentIndex !=index)
//             fwrite(&p, sizeof(Point), 1, tempFP);
//         currentIndex++;
//     }
//
//     fclose(fp);
//     fclose(tempFP);
//
//     if(remove(filename)==0)
//         if(rename("temp.bin", filename) !=0 )
//             printf("Couldn't rename the temp file..\n");
//
// }
// int main() {
//     return 0;
// }