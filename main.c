#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

void selectionMenu() {
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
}

// Fibbonachi

void calculatorLauncher(int selection) {
    if (selection == 1) { //Addtion starts here
        int items;
        printf("How many numbers do you wish to add together?\n");
        scanf("%d", &items);
        printf("Your result is: %f\n", simpleAddition(items));
    }
    else if (selection == 2) { //Subtractions starts here
        int items;
        printf("How many numbers do you wish to subtract?\n");
        scanf("%d", &items);
        printf("Your result is: %f\n", simpleSubtraction(items));
    }
    else if (selection == 3) { //Multiplication starts here
        int items;
        printf("How many numbers do you wish to multiply?\n");
        scanf("%d", &items);
        printf("Your result is: %lf\n", simpleMultiplication(items));
    }
    else if (selection == 4) { //Division starts here
        int items;
        printf("How many items do you wish to devide?\n");
        scanf("%d", &items);
        printf("Your result is: %lf\n", simpleDivision(items));
    }
    else if (selection == 5) { //Power operation starts here
        printf("Your result is: %lf\n", simplePower()); 
}

int main() {
    bool repeatCalculatorProcess;
    int operation;
    do {
        printf("Please select operation:\n");
        selectionMenu();
        scanf("%d", &operation);
        calculatorLauncher(operation);
        printf("Do you wish to calculate something else?\n\nPress 1 for Yes and 0 for No\n");
    } while (repeatCalculatorProcess);
    return 0;
}