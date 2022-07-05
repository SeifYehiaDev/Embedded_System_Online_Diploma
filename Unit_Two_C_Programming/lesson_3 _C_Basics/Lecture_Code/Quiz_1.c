/*
 * Quiz_1.c
 *
 * Created on : 4/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 * */

#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>

void main() {
    // What is the output ?
    int x = 5;
    float y = 2.0;
    if (x / y == 2)
        printf("int / float ===> int.\n");
    else if (x / y == 2.5) //======> This condition is satisfied.
        printf("int / float ===> float.\n");
}
