// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// int main() {
//     int i;
//     int* grades =NULL;
//
//     int* temp = NULL; //using temp
//
//     int totalGrades;
//     printf("Enter total grades: ");
//     scanf("%d", &totalGrades);
//     grades = (int*)malloc(totalGrades * sizeof(int));
//     if (grades == NULL) {
//         printf("Allocating failes\n");
//
//     }
//     for (i=0;i<totalGrades;i++) {
//         scanf("Enter grade: ");
//         scanf("%d",&grades[i]);
//     }
//     // Code...
//     totalGrades = totalGrades + 2;
//
//     //this is better solution than the previous
//     temp = (int*)realloc(grades, totalGrades * sizeof(int));
//     if(temp!=NULL)
//         grades = temp;
//
//     grades[totalGrades -1] = 100;
//     grades[totalGrades -2] = 90;
//    //grades = (int*)realloc(grades, totalGrades * sizeof(int));
//
//     totalGrades  = totalGrades - 3;
//     temp = (int*)realloc(grades, totalGrades * sizeof(int));
//     if(temp!=NULL)
//         grades = temp;
//
//     free(grades);
//
//     return 0;
// }