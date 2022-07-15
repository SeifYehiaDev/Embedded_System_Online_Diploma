/*
 * GoTo.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

void main() {
    char userChoice = 'y';
    float x, y;
    do {
        printf("Enter x value :\n");
        fflush(stdin);
        fflush(stdout);
        scanf("%f", &x);
        y = 5 * x * x + 3 * x + 2;
        printf("y(%f) = %f\n", x, y);
        printf("Do you want to evaluate again (y/n) ?\n");
        fflush(stdin);
        fflush(stdout);
        scanf("%c", &userChoice);
    } while (userChoice == 'y');
    printf("Thank for you , End The program\n");
}