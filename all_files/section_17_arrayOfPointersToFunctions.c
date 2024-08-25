// #include <stdio.h>
// #include <stdlib.h>
//
// //Array of Pointers to Functions
//
// void addition(int a, int b) {
//     printf("%d + %d = %d\n",a,b,a+b);
// }
// void subtraction(int a, int b) {
//     printf("%d - %d = %d\n",a,b,a-b);
// }
// void multiplication(int a, int b) {
//     printf("%d * %d = %d\n",a,b,a*b);
// }
//
// void division(int a, int b) {
//     if (b!=0){
//         printf("%d / %d = %d\n",a,b,a/b);
//     }
//     else printf("Cannot divide by zero!\n");
// }
// void remainder(int a, int b) {
//     if (b!=0){
//         printf("%d % %d = %d\n",a,b,a%b);
//     }
//     else printf("Cannot divide by zero!\n");
// }
//
//
// int main() {
//     void (*funPtrArray[])(int, int) = {addition, subtraction, multiplication, division};
//     int num1, num2;
//     char choice;
//     printf("Choose: \n0 - addition \n1 -suntraction \n2- multiplcation \n3 - division\n");
//     scanf(" %d", &choice);
//     // Notice the space before %c to avoid capturing the newline character
//
//     printf("Enter num1: ");
//     scanf("%d", &num1);
//     printf("Enter num2: ");
//     scanf("%d", &num2);
//
//     (*funPtrArray[choice])(num1, num2);
//
//     // switch(choice) {
//     //     case '+':
//     //         addition(num1,num2);
//     //     break;
//     //     case '-':
//     //     subtraction(num1,num2);
//     //     break;
//     //     case '*':
//     //     multiplication(num1,num2);
//     //     break;
//     //     case '/':
//     //     division(num1,num2);
//     //     break;
//     //     default:
//     //         printf("No relevant operation, try again");
//     // }
//     return 0;
// }