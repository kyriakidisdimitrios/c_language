// #include <stdio.h>
// #include <stdlib.h>
// #define _CRT_SECURE_NO_WARNINGS
//
//
//
// //Practical Example using Bit Fields
//
// //32-bit controller
// typedef struct  ControlRegister {
//     unsigned int enableDevice : 1; // Bit 0: enable or disable device
//     unsigned int resetDevice : 1; // Bit 1: reset the device
//     unsigned int interruptEnable : 1; // Bit 2: enable of disable interrupts
//     unsigned int modeSelect : 2; //Bits 3-4: Select operating (00,01,10,11)
//     unsigned int reserved : 27; //Bits 5-31: Reserved for future use
// }ControlRegister;
//
// int main() {
//     // Declare a control register
//     ControlRegister controlReg = { 0 };
//     controlReg.enableDevice = 1;
//
//     // Select operating mode 3
//     controlReg.modeSelect = 3;
//
//     // The size of ControlRegister should be 4 bytes (32 bits)
//     printf("Size of ControlRegister is: %lu bytes\n", sizeof(ControlRegister));
//
//     return 0;
// }