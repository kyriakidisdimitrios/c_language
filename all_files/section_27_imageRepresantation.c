// #include <stdio.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS
//
//
// //gray scale image
// typedef struct pixel {
//     //unsigned char value; //0-255 pixel intensity
//     unsigned char redIntensity;
//     unsigned char greenIntensity;
//     unsigned char blueIntensity;
//
// }RGBPixel;
//
// int main() {
//     RGBPixel image[10][10];
//     for (int i=0;i<10;i++)
//         for (int j=0;j<10;j++) {
//             //image[i][j].value = (unsigned char)((255.0/10) * j);
//             image[i][j].redIntensity = (unsigned char)((255.0/10) * j);
//             image[i][j].greenIntensity = 128;
//             image[i][j].blueIntensity = (unsigned char)((255.0/10) * j);
//         }
//     FILE* fp = fopen("rgb_image.bin", "wb");
//     if(fp !=NULL) {
//         fwrite(image, sizeof(RGBPixel), 10*10, fp);
//         fclose(fp);
//     }
//     return 0;
// }