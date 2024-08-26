//
//
// #include <stdio.h>
// #include <string.h>
//
// // int main() {
// //     //Open a file in write mode. If the file does not exist, it will be created.
// //     FILE* file = fopen("log.txt", "w");
// //     if (file == NULL) {
// //         printf("Failed to open file\n");
// //         return 1;
// //     }
// //     //Write some data to the file
// //     fprintf(file, "Processing user request...\n");
// //     //close the file
// //     fclose(file);
// //
// //     //work...
// //
// //     if(remove("log.txt")!=0) {
// //         printf("Failed to delete file\n");
// //     }
// //     else {
// //         printf("File deleted successfully\n");
// //     }
// //
// //     return 0;
// // }
// int main() {
//     char filePath[30];
//     printf("Enter the full path of the file you want to delete: ");
//     fgets(filePath, sizeof(filePath), stdin);
//
//     //remove newlines character if present
//     int len = strlen(filePath);
//     if (len>0 && filePath[len-1] == '\n') {
//         filePath[--len] = '\0';
//
//     }
//     int result = remove(filePath);
//     if (result!=0) {
//         printf("Removing the file has failed...\n");
//     }
//     else {
//         printf("Successful remove of the file...\n");
//     }
//     return 0;
// }