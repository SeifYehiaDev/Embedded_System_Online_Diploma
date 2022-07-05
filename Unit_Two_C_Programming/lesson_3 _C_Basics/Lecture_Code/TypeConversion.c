/*
 * TypeConversion.c
 *
 * Created on : 4/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 * */

#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>

void main() {
    float a = 1.0, b = 2.0, c = 3.0;
    int s;
    s = a * b * c / 100 + 32 / 4 - 3 * 1.1;
    printf("s = %d", s); // s = 4

    /* Solution for this equation .
     * s = a * b * c / 100 + 32 / 4 - 3 * 1.1;
     * s = 6.0 / 100 + 32 / 4 - 3 * 1.1 ;
     * s = 0.06 + 32 / 4 - 3 * 1.1 ;
     * s = 0.06 + 8 - 3 * 1.1 ;
     * s = 0.06 + 8 - 3.3 ;
     * s = 8.06 - 3.3 ;
     * s = 4.76 ;
     * s = 4 ; ======> Convert float to int.
     * */
}
