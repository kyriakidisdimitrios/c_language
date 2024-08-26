// #include <stdio.h>
//
//
// /*File Creation and Writing: Write a function createAndWriteFile that takes a filename and a string as
//  *arguments. The function should open the file in write mode, write the provided string to the file,
//  *and then close the file. Ensure that your function properly handles any file opening errors.*/
// void createAndWriteFile(char* filename, char* stringToAdd) {
//     FILE * sourceFP = fopen(filename, 'w');
//     if (sourceFP == NULL){
//         printf("Error: Could not open file.\n");
//         fclose(sourceFP);
//     }
//     int num=0;
//
//     // Write the string to the file
//     fprintf(sourceFP, "%s", stringToAdd);
//
//     fclose(sourceFP);
// }
//
// /*File Reading: Write a function readFile that takes a filename as an argument. The function should
// open the file in read mode, read the file content line by line and print each line to the console.
// After reading all lines, close the file. As before, ensure your function properly handles any file
// opening errors.*/
// void readFile(char* filename,char* stringToAdd) {
//     FILE * sourceFP = fopen(filename, 'r');
//     if (sourceFP == NULL){
//         printf("Error: Could not open file.\n");
//         fclose(sourceFP);
//     }
//     char buffer[256]; // Define a buffer of 256 bytes
//
//     while (fgets(buffer, sizeof(buffer), sourceFP) != NULL) {
//         // Print the line read from the file
//         printf("%s", buffer);
//     }
//
//     fclose(sourceFP);
// }
// /*File Appending: Write a function appendToFile that takes a filename and a string as arguments.
//  *The function should open the file in append mode, write the provided string to the end of the file,
//  *and then close the file. Again, ensure that your function properly handles any file opening errors.*/
// void fileAppending(char* filename, char* stringToAdd) {
//     FILE * sourceFP = fopen(filename, 'a');
//     if (sourceFP == NULL){
//         printf("Error: Could not open file.\n");
//         fclose(sourceFP);
//     }
//
//     // Write the string to the file
//     fprintf(sourceFP, "%s", stringToAdd);
//
//     fclose(sourceFP);
// }
//
// /*File Modification: Write a function modifyLineInFile that takes a filename,
//  *a line number, and a string as arguments. This function should replace the
//  *specified line in the file with the provided string. If the specified line
//  *does not exist, the function should append the string at the end of the file.*/
// void modifyLineInFile(char* filename, int lineNumber, char* stringForReplacement) {
//     FILE *sourceFP = fopen(filename, "r");
//     if (sourceFP == NULL) {
//         printf("Error: Could not open file for reading.\n");
//         return;
//     }
//
//     // Temporary file for storing the modified content
//     FILE *tempFP = fopen("tempfile.tmp", "w");
//     if (tempFP == NULL) {
//         printf("Error: Could not open temporary file for writing.\n");
//         fclose(sourceFP);
//         return;
//     }
//
//     char buffer[256];
//     int currentLine = 1;
//     int lineReplaced = 0;
//
//     // Read the original file and write to temporary file
//     while (fgets(buffer, sizeof(buffer), sourceFP) != NULL) {
//         if (currentLine == lineNumber) {
//             // Replace the specific line
//             fprintf(tempFP, "%s\n", stringForReplacement);
//             lineReplaced = 1;
//         } else {
//             // Write original line to temporary file
//             fprintf(tempFP, "%s", buffer);
//         }
//         currentLine++;
//     }
//
//     // If the line number was not found, append the replacement line
//     if (!lineReplaced) {
//         fprintf(tempFP, "%s\n", stringForReplacement);
//     }
//
//     // Close both files
//     fclose(sourceFP);
//     fclose(tempFP);
//
//     // Replace the original file with the temporary file
//     if (remove(filename) != 0) {
//         printf("Error: Could not delete the original file.\n");
//         return;
//     }
//     if (rename("tempfile.tmp", filename) != 0) {
//         printf("Error: Could not rename the temporary file.\n");
//         return;
//     }
// }
// /*Test Your Functions: Write a main function to test each of your file operation functions.
//  *This function should create a file and write some text to it using createAndWriteFile,
//  *print the content of the file to the console using readFile, append more text to the file
//  *using appendToFile, print the content of the file to the console again to verify that the
//  *text was appended correctly, modify a line in the file using modifyLineInFile, and finally
//  *print the content of the file again to verify that the line was modified correctly.*/
// int main() {
//     char filename[] = "testfile.txt";
//     createAndWriteFile(filename, "Line 1\nLine 2\nLine 3\n");
//     printf("File content after creation and writing:\n");
//     readFile(filename,"123");
//     fileAppending(filename, "Line 4\nLine 5\n");
//     modifyLineInFile(filename, 2, "Modified Line 2");
//     return 0;
// }