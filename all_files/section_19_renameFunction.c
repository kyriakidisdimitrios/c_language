// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
//
// int main() {
// //     int result;
// //     result = rename("myFile.txt", "yourNewFile.txt");
// //     if(result==0)
// //         printf("File has been successfully renamed");
// //     else
// //         printf("Something went wrong");
//
//     char filename[100], extension[10], newFilename[110];
//     int i,j;
//     int result;
//
//     printf("Enter the current filename with extension: ");
//     scanf("%s", filename); //myFile.txt
//
//     printf("Enter new extension of the file: "); //csv
//     scanf("%s", extension);
//
//     //find position of the last '.'
//     int dotPosition = -1;
//     for(i=0; filename[i] !='\0'; i++) {
//         if (filename[i]== '.') {
//             dotPosition = i;
//         }
//     }
//     //If '.' was not found in filename, return error
//     if(dotPosition==-1) {
//         printf(". not found on the file");
//     }
//     for(j=0;j<dotPosition;j++) {
//         newFilename[j] = filename[j];
//     }
//     //Add the new extension
//     for(i=0;extension[i] != '\0'; i++,j++) {
//         newFilename[j] =extension[i];
//     }
//     //Null-terminate the new filename
//     newFilename[j]='\0';
//     //Rename the file
//     result = rename(filename, newFilename);
//     if (result!=0) {
//         printf("Removing the file has failed...\n");
//     }
//     else {
//         printf("Successful remove of the file...\n");
//     }
//
//      return 0;
//  }