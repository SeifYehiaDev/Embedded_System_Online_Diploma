/*
 * OutOfRange.c
 *
 * Created on : 4/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 * */
#include <stdio.h>
#include <limits.h>

void main() {
    const unsigned int minUnsignedInt = 0, maxUnsignedInt = UINT_MAX;
    unsigned int negativeNumber = -63, resultOfEquation;
    printf("\nThe range of \"unsigned int\" from %u to %u.\n", minUnsignedInt, maxUnsignedInt);
    resultOfEquation = maxUnsignedInt + (negativeNumber + 1);
    printf("negativeNumber = %u & resultOfEquation = %u.\n", negativeNumber, resultOfEquation);
    if (negativeNumber == resultOfEquation)
        printf("negativeNumber is equal resultOfEquation.\n");
    else
        printf("negativeNumber is not equal resultOfEquation.\n");
}
