#include <stdio.h>
#include "menu.h"

int menu(void) {
    int option;

    // ANSI escape code to clear screen
    printf("\033[2J\033[H");

    printf("===== MENU =====\n");
    printf("1. Write to File\n");
    printf("2. Read from File\n");
    printf("3. First Calculation\n");
    printf("4. Second Calculation\n");
    printf("5. Exit\n");
    printf("Select an option (1-5): ");
    scanf("%d", &option);

    return option;
}
