// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
//
// void removeSpaceCharacters(char* inputFileName, char *outputFileName) {
//     char currentCharacter; //will be used to read
//     FILE* inFile;
//     FILE* outFile;
//     inFile = fopen(inputFileName, "r");
//     outFile = fopen(outputFileName, "w");
//     if (inFile != NULL && outFile != NULL) {
//         while (!feof(inFile)) {
//             currentCharacter = fgetc(inFile);
//             if(currentCharacter != ' ')
//                 fputc(currentCharacter, outFile);
//         }
//     }
//     //Closing just the files managed to open
//     if (inFile !=NULL)
//         fclose(inFile);
//     if (outFile !=NULL)
//         fclose(outFile);
// }
//
// int main() {
//     char inputFileName[30] = {0};
//     char outputFileName[30] = {0};
//
//     printf("Enter a filename for the input file:");
//     scanf("%s", inputFileName);
//     printf("Enter a filename for the output file:");
//     scanf("%s", outputFileName);
//
//     removeSpaceCharacters(inputFileName, outputFileName);
//     return 0;
// }
//
