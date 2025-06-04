#include <stdio.h>
#include "functions.h"

void mainLoop(int option) {
    int a, b;

    switch (option) {
        case 1:
            writeFile();
            break;
        case 2:
            readFile();
            break;
        case 3:
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            firstCalculation(a, b);
            break;
        case 4:
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            secondCalculation(a, b);
            break;
        case 5:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
    }
}

