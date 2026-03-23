#include <stdio.h>
#include <conio.h>

int main() {
    FILE *ptr = fopen("file.txt", "a");
    fprintf(ptr, "\nwhat the fuck am I doing here, lol. %u", (unsigned int)ptr);
    fclose(ptr);
    return 0;
    
}
