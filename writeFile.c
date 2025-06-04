#include <stdio.h>

void writeFile(void) {
    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    fprintf(file, "Sample text written to file.\n");
    fclose(file);
    printf("Data written to file successfully.\n");
}

