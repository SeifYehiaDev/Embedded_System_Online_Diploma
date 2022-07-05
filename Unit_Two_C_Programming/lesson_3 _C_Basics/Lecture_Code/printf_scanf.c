/*
 * printf_scanf.c
 *
 * Created on : 5/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 * */

#include <stdio.h>

void main() {
    int userEnterIntegerNumber; // Declare a new integer variable.
    printf("\nPleas enter the integer number ?\n");
    fflush(stdout); // used to clean buffer & used between printf and scanf .
    scanf("%d",&userEnterIntegerNumber); // to accept value form user . --------> &nameVariable == Address(nameVariable)
    printf("thank you for enter number , your enter %d\n", userEnterIntegerNumber);
}
