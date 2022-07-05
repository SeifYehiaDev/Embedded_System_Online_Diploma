/*
 * ExplicitTypeConversion.c
 *
 * Created on : 5/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 * */

#include <stdio.h>

void main() {
    double doubleNumber = 1.2;
    int intNumber = doubleNumber + 1;
    // int =  (double / int ) ------>  int = double
    printf("\nThe Result of sum : %d\n", intNumber);
    intNumber = (int) doubleNumber + 1; // Explicit Type Conversion.
    printf("The Result of sum : %d\n", intNumber);
}
