#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
    unsigned int read: 1;
    unsigned int write: 1;
    unsigned int execute: 1;
}Permissions;

//Exercise #1: Write a function that recieves a "permissions" variable and the function prints information
//Exercise #2: Create a variable with certain permissions and call it
//Exercise #3: Implement a function that is called changed Permissions

void printPermissions(Permissions p) {
    printf("Permissions:\n:");
    printf("Read:%u\n", p.read);
    printf("Write:%u\n", p.write);
    printf("Execute:%u\n", p.execute);
}

void changePermissions(Permissions* p, unsigned int newRead, unsigned int newWrite, unsigned int newExecute) {
    p->read = newRead;
    p->write = newWrite;
    p->execute = newExecute;
}
int main() {

    Permissions pfile1 = {1,1,0};

    printPermissions(pfile1);
    changePermissions(&pfile1, 1, 0, 1);
    printPermissions(pfile1);
    return 0;
}