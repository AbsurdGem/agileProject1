#include <stdio.h>
#include "readFile.h"

void readFile(void) {
    FILE *file = fopen("output.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    printf("\n");
}
