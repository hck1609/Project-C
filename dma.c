#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(8);
    ptr[0]=42;
    ptr[1]=21;

    printf("Value: %d\n%d\n", *&ptr[0],*&ptr[1]);
    free(ptr);
    return 0;
}
