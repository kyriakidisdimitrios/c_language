// #include <stdio.h>
// #include <stdlib.h>
//
// /* Write 2 functions that allocate dynamically an array of employees
//  * and reading inputs for each of the elements from the user:
//  *  - The first function gets the size of the array, allocates memory and returns the array
//  *  - The second functuions gets the size of the array, and allocates the memory dynamically by
//  *  updating it by "pointer" (function of the void type) */
//
// typedef struct employee {
//     char name[10];
//     float age;
//     int id;
// }Employee;
//
// //Solution function n1
// Employee *createEmployeesArray(int totalElements) {
//     Employee *employeesArr;
//     int i;
//     employeesArr = (Employee*)malloc(sizeof(Employee)*totalElements);
//     for(i=0;i<totalElements;i++) {
//         printf("Enter a name for Employee #%d: ", i+1);
//         //scanf("%s", &employeesArr->name); //here we want to access the element itself
//         //scanf("%s", &(employeesArr+1)->name); //for the next eployee
//         scanf("%s", &employeesArr[i].name); //here we want to access the element itself
//         printf("Enter a age for Employee #%d: ", i+1);
//         scanf("%f", &employeesArr[i].age);
//         printf("Enter a id for Employee #%d: ", i+1);
//         scanf("%d", &employeesArr[i].id);
//     }
//     return employeesArr;
// }
//
// void createEmployeesArray2(Employee **empPTR, int totalElements) {
//     Employee *employeesArr;
//     int i;
//     employeesArr = (Employee*)malloc(sizeof(Employee)*totalElements);
//     for(i=0;i<totalElements;i++) {
//         printf("Enter a name for Employee #%d: ", i+1);
//         //scanf("%s", &employeesArr->name); //here we want to access the element itself
//         //scanf("%s", &(employeesArr+1)->name); //for the next eployee
//         scanf("%s", &employeesArr[i].name); //here we want to access the element itself
//         printf("Enter a age for Employee #%d: ", i+1);
//         scanf("%f", &employeesArr[i].age);
//         printf("Enter a id for Employee #%d: ", i+1);
//         scanf("%d", &employeesArr[i].id);
//     }
//     *empPTR = employeesArr; //we do it indirectly, we made a pointer to pointer and here we change the value of the actual employeesArr Object
// }
//
// int main() {
//     Employee* ptrArr;
//     createEmployeesArray2(&ptrArr,5);
//     return 0;
// }