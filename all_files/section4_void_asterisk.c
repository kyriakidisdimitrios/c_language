#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void genericSwap(void* a, void* b, int size) { // we assume  size > 0
    //size - soecifies the number of bytes
    void *tempMemory = malloc(size);

    //Memory copy function
    //void * memcpy(void *dest, const void * src, size_t, num)
    memcpy(tempMemory, a, size); //memcpy -> memory copy to tempMemory from a, of size size
    memcpy(a, b, size);
    memcpy(b, tempMemory, size);

    free(tempMemory);
}

int main() {
    // int a=10;
    // void *ptr = &a;
    // //printf("%d", *ptr); //this does not know how many bytes
    // //printf("%d", *(int *)ptr );
    // printf("%lf", *(double *)ptr);

    int num =5, num2 =7;
    double average1=90.5, average2= 89.7;
    genericSwap(&average1, &average2, sizeof(double));
    genericSwap(&num, &num2, sizeof(int));
    return 0;
}