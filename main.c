
#include <stdlib.h>
#include "menu.h"
#include "mainLoop.h"

int main(void) {
    int option;

    do {
        option = menu();
        mainLoop(option);
    } while (option != 5);  // Assuming option 5 is the exit condition

    return 0;
}
