/*
 * ImplicitTypeConversion.c
 *
 * Created on : 7/4/2022
 * Author : Seif Yehia Esmail Abdel Aal
 * */

#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>

void main() {
    int x = 10;
    char y = 'a'; // In ASCII code = 97
    x = x + y; // 10 + 97 = 107
    // implicitly converted
    printf("x = %d\n", x); // x = 107
    float z = x + 1.0;
    printf("z = %f\n", z); // z = 108.000000
}
