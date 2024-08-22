#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int my_strlen(char* str);
bool strcmp(char *string1,char *string2);

int main() {
    char string1[10] = "Hello1";
    char string2[10] = "Hello1";
    bool result = strcmp(string1, string2);
    if (result) {
        printf("Strings are identical.\n");
    }
    else {
        printf("Strings are different.\n");
    }
    return 0;
}

int my_strlen(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}



bool strcmp(char *string1,char *string2) {
    int i=0;
    int y = my_strlen(string1);
    int z = my_strlen(string2);
    if (y!=z) return false;
    for(i;i<y;i++) {
        if (string1[i] != string2[i]) return false;
    }
    return true;
}
