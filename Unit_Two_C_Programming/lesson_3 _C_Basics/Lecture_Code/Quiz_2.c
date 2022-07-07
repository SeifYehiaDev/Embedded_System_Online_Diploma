/*
 * Quiz_2.c
 *
 * Created on : 7/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 * */

#include <stdio.h>

void main() {
    /*
     * Quiz  What is the output ?
     * intNumber is an integer variable and realNumber is a real variable.
     * */
    int intNumber;
    float realNumber;
    printf("\n______________ For Integer Number ______________\n");
    intNumber = 2 / 9;
    printf("2 / 9 = %d\n", intNumber);      // ========>  0
    intNumber = 2.0 / 9;
    printf("2.0 / 9 = %d\n", intNumber);    // ========>  0
    intNumber = 2 / 9.0;
    printf("2 / 9.0 = %d\n", intNumber);    // ========>  0
    intNumber = 2.0 / 9.0;
    printf("2.0 / 9.0 = %d\n", intNumber);  // ========>  0
    intNumber = 9 / 2;
    printf("9 / 2 = %d\n", intNumber);      // ========>  4
    intNumber = 9.0 / 2;
    printf("9.0 / 2 = %d\n", intNumber);    // ========>  4
    intNumber = 9 / 2.0;
    printf("9 / 2.0 = %d\n", intNumber);    // ========>  4
    intNumber = 9.0 / 2.0;
    printf("9.0 / 2.0 = %d\n", intNumber);  // ========>  4
    printf("\n______________ For Real Number ______________\n");
    realNumber = 2 / 9;
    printf("2 / 9 = %f\n", realNumber);      // ========>  0.000000
    realNumber = 2.0 / 9;
    printf("2.0 / 9 = %f\n", realNumber);    // ========>  0.222222
    realNumber = 2 / 9.0;
    printf("2 / 9.0 = %f\n", realNumber);    // ========>  0.222222
    realNumber = 2.0 / 9.0;
    printf("2.0 / 9.0 = %f\n", realNumber);  // ========>  0.222222
    realNumber = 9 / 2;
    printf("9 / 2 = %f\n", realNumber);      // ========>  4.000000  , int / int = int -------> (float).
    realNumber = 9.0 / 2;
    printf("9.0 / 2 = %f\n", realNumber);    // ========>  4.500000
    realNumber = 9 / 2.0;
    printf("9 / 2.0 = %f\n", realNumber);    // ========>  4.500000
    realNumber = 9.0 / 2.0;
    printf("9.0 / 2.0 = %f\n", realNumber);  // ========>  4.500000
}
