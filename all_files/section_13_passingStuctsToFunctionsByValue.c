// #include <stdio.h>
// #include <stdlib.h>
//
//
// typedef struct employee {
//     char name[10];
//     float age;
//     int id;
// }Employee;
//
// void printEmployee(Employee emp) {
//     printf("Employee #1 name is %s\n", emp.name);
//     printf("Employee #1 age is %f\n", emp.age);
//     printf("Employee #1 id is %d\n", emp.id);
// }
// // void increaseAgeBy1(Employee emp) {
// //     emp.age +=1; // emp.age = emp.age + 1;
// // }
// void increaseAgeBy1(Employee *empPtr) {
//     (*empPtr).age +=1; // emp.age = emp.age + 1;
// }
//
// int main() {
//     Employee employee1 = {"Jake",24.5, 123};
//     printEmployee(employee1);
//     increaseAgeBy1(&employee1); //still the same
//     printEmployee(employee1);
//     return 0;
// }