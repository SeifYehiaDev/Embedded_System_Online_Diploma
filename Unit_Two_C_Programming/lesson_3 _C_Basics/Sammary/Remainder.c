/*
 * Remainder.c
 *
 * Created on : 19/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>

/*                             This code in unite 2 Lesson 4 at page 2
 * Data Conversion and type Casting
 * */
void main() {
    int remainder; // remainder must be integer
    remainder = 1 % 8;
    printf("1 % 8 = %d\n", remainder); // if leftNumber < RightNumber =====> Remainder = leftNumber = 1
    remainder = 2 % 8;
    printf("2 % 8 = %d\n", remainder); // if leftNumber < RightNumber =====> Remainder = leftNumber = 2
    remainder = 3 % 8;
    printf("3 % 8 = %d\n", remainder); // if leftNumber < RightNumber =====> Remainder = leftNumber = 3
    remainder = 4 % 8;
    printf("4 % 8 = %d\n", remainder); // if leftNumber < RightNumber =====> Remainder = leftNumber = 4
    remainder = 8 % 8;
    printf("\"8 % 8 = %d\"\n", remainder); // if leftNumber == RightNumber =====> Remainder = 0
    remainder = 16 % 8;
    printf("\"16 % 8 = %d\"\n", remainder); // if leftNumber Accept divided on RightNumber =====> Remainder = 0
    printf("___________________________________________________\n");
    remainder = 9 % 8;
    /*
     * remainder = 9 - ( 8 * (9 / 8))
     * remainder = 9 - (8 * 1)
     * remainder = 9 - 8 = 1
     * */
    printf(" 9 %  8 =  %d\n", remainder); // Remainder = 1
    remainder = 9 % -8;
    /*
     * remainder = 9 - (-8 * (9 / -8))
     * remainder = 9 - (-8 * -1)
     * remainder = 9 - 8 = 1
     * */
    printf(" 9 % -8 =  %d\n", remainder); // Remainder = 1 , if negative @ right number don't effect on remainder.
    remainder = -9 % 8;
    /*
     * remainder = -9 - (8 * (-9 / 8))
     * remainder = -9 - (8 * -1)
     * remainder = -9 - (-8) = 1
     * remainder = -9 + 8 = -1
     * */
    printf("-9 %  8 = %d\n", remainder); // Remainder = -1 , if negative @ left number effect on remainder.
    remainder = -9 % -8;
    /*
     * remainder = -9 - (-8 * (-9 / -8))
     * remainder = -9 - (-8 * 1)
     * remainder = -9 - (-8) = 1
     * remainder = -9 + 8 = -1
     * */
    printf("-9 % -8 = %d\n", remainder); // Remainder = -1
}
/*                                                 _Output_
 * 1 % 8 = 1
 * 2 % 8 = 2
 * 3 % 8 = 3
 * 4 % 8 = 4
 * "8 % 8 = 0"
 * "16 % 8 = 0"
 * ___________________________________________________
 *  9 %  8 =  1
 *  9 % -8 =  1
 * -9 %  8 = -1
 * -9 % -8 = -1
 * */