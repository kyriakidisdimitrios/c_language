#define _CRT_SECURE_NO_WARNINGS;
#include <stdio.h>
#include <stdbool.h>

// Tutorial: using function pointers and void pointers in C

// Function tot print an integer
void printInt(void* a) { //void* universal pointer, can be pointing to objects of any type
    printf("%d", *(int*) a); //(int*) casting
}
void printFloat(void* a) {
    printf("%.2f", *(float*) a);
}
void printDouble(void* a) {
    printf("%.lf", *(double*) a);
}
void printChar(void* a) {
    printf("%c", *(char*) a);
}
void doubleInt(void* a) {
    printf("%d", 2 * *(int*)a);
}
//function to perform an operation on all elements of an array

void performOperation(void* arr, int arrLength, int elementSize, void (*operation)(void*)) {
    //function pointer that recieves a universal pointer and it is of a void type
    for(int i=0;i<arrLength;i++) {
        operation((char*)arr+i*elementSize); //char is 1 byte
        printf("\n");
    }

}

int main() {
    //Integer array
    int arrInt[] = {1,2,3};
    performOperation(arrInt, 3, sizeof(int), printInt);
    //Float array
    float arrFloat[]={1.1,2.2,3.3,4.4,5.5};
    performOperation(arrFloat, 5, sizeof(float), printFloat);
    double arrDouble[]={1.1,2.2,3.3,4.4,5.5};
    performOperation(arrDouble, 5, sizeof(double), printDouble);
    char arrChar[]={'c','a','d'};
    performOperation(arrChar, 3, sizeof(char), printChar);
    return 0;
}