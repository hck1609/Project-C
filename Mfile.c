#include <stdio.h>
#include <conio.h>

int main() {
    FILE *ptr = fopen("file.txt", "a");
    fprintf(ptr, "\nYO, %u", (unsigned int)ptr);
    fclose(ptr);
    return 0;
    
}
