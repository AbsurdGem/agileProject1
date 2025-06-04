#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void) {
    int option;

    do {
        option = menu();
        mainLoop(option);
    } while (option != 5);  // Assuming option 5 is the exit condition

    return 0;
}

