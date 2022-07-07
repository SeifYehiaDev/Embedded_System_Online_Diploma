/*
 * printf_scanf.c
 *
 * Created on : 5/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 * */

#include <stdio.h>

void main() {
    int userEnterIntegerNumber; // Declare a new integer variable.
    float userEnterFloatNumber; // Declare a new float variable.
    printf("\n______________ user enter integer number ______________\n");
    printf("Pleas enter the integer number ?\n");
    fflush(stdout); // used to clean buffer & used between printf and scanf .
    scanf("%d",&userEnterIntegerNumber); // to accept value form user . --------> &nameVariable == Address(nameVariable)
    printf("thank you for enter integer number , your enter %d\n", userEnterIntegerNumber);
    printf("\n______________ user enter float number ______________\n");
    printf("Pleas enter the integer number ?\n");
    fflush(stdout);
    scanf("%f",&userEnterFloatNumber);
    printf("thank you for enter float number , your enter %f\n", userEnterFloatNumber);
}
