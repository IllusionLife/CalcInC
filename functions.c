#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

float simpleAddition(int items) {
    float addendOne = 0, addendTwo;
    printf("Enter the numbers you wish to add, separated by space or enter:");
    for (int i = 0; i < items; i++) {
        scanf("%d", &addendTwo);
        addendOne += addendTwo;
    }
    return addendOne;
}

float simpleSubtraction(int items) {
    float minuend = 0, subtrahend;
    printf("Please enter the minuend:\n");
    scanf("%lf", &minuend);
    printf("Enter the numbers you wish to subtract, separated by space or enter:\n");
    for(int i = 1; i < items; i++) {
        scanf("%lf", &subtrahend);
        minuend -= subtrahend;
    }
    return minuend;
}

double simpleMultiplication(int items) {
    double multiplicand = 1, multiplicator;
    printf("Please enter the numbers you wish to multiply together, separated by space or enter:\n");
    for (int i = 0; i < items; i++) {
        scanf("%lf", &multiplicator);
        multiplicand *= multiplicator;
    }
    return multiplicand;
}

double simpleDivision(int items) {
    double divident = 0, divisor;
    printf("Please enter the divident:\n");
    scanf ("%lf", &divident);
    printf("Enter the numbers you wish to devide, separated by space or enter:\n");
    for (int i = 1; i < items; i++) {
        scanf("%lf", &divisor);
        while (divisor == 0) {
            printf("0 is not a valid divisor, please enter another divisor:\n");
            scanf("%lf", &divisor);
        }
        divident /= divisor;
    }
    return divident;
}

double simplePower() {
    int base, exponent;
    printf("Please enter the base number:\n");
    scanf ("%f", &base);
    printf("Please enter the exponent:\n");
    scanf ("%d", &exponent); //Task: Add fraction numbers to power function
}