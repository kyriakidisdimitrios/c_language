// #include <stdio.h>
// #define _CRT_SECURE_NO_WARNINGS
//
// enum workingDays {
//     MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY
// };
//
// enum months {
//     JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
// };
//
//
//
// enum monthBonus {
//     JAN1=10, FEB1=20, MAR1=35
// };
//
// typedef enum workingDays1 {
//     MONDAY1 =10, TUESDAY1=10, WEDNESDAY1 =10, THURSDAY1, FRIDAY1
// }bonus;
// int main() {
//     //bonus myDay;
//
//     // enum workingDays userDay; // Creating a "day" variable of an "enum working Days" type
//     // //...
//     // printf("Please enter the day you worked");
//     // scanf("%d", &userDay);
//     // if(userDay==MONDAY) //Monday
//     //     //Some operations related to working in Monday
//     // printf("Monday... Do this, do that... \n");
//     // else
//     //     printf("... \n");
//     enum months month;
//     char *monthsNames[] = {"", "Jan", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"}; //array of pointers to strings
//
//     int salaries[13] ={0, 10,20,30,23,50,20,30,40,11,20,30,99};
//
//     for(month= JAN; month< DEC; month++) {
//         //printf("%2d%10d\n", month, salaries[month]); //%2d table of size 2 for the 1st, %10d table of size 10 for the second
//         printf("%2s%10d\n", monthsNames[month], salaries[month]);
//     }
//     return 0;
//
// }
