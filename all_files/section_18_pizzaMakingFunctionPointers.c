// #define _CRT_SECURE_NO_WARNINGS;
// #include <stdio.h>
// #include <stdbool.h>
//
// //Project: Pizza making: A delicious Use of function Pointers
//
// //step 1: Define the functions for each category cause, dough, cheese
//
// void thinCrust() {
//     printf("Making the thin crust ");
// }
// void thiokCrust() {
//     printf("Making the thick crust ");
// }
// void tomatosauce() {
//     printf("Making the tomato sauce ");
// }
// void pestosauce() {
//     printf("Making the pesto sauce ");
// }
// void mozzarelaCheese() {
//     printf("Making the mozzarela cheese");
// }
// void cheddarCheese() {
//     printf("Making the cheddar cheese");
// }
// void newSauce() {
//     printf("Making new sauce");
// }
//
// //create pizza function
// //create 2 function 2 functions for dough (thin crust, thick crust), 2 for sauce(tomato and pesto) and 2 for cheese(mozzarela and cheddar)
//
// // step 2 create the general pizza function
//
// void createPizza(void (*makeDaugh)(), void (*makeSauce)(),void (*addCheese)()) {
//     makeDaugh();
//     makeSauce();
//     addCheese();
// }
//
// //step 3
// int main() {
//     printf("Pizza 1\n");
//     createPizza(thinCrust, tomatosauce, mozzarelaCheese);
//     printf("===========\n");
//     printf("Pizza 2\n");
//     createPizza(thinCrust, pestosauce, cheddarCheese);
//     return 0;
// }