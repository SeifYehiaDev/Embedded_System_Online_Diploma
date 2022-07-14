/*
 * Logic_Gate.c
 *
 * Created on : 14/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

void main() {
    char x = 7, y = 9, z;
    /*
     * x = 7 ; x = 0000 0111 ;
     * y = 9 ; y = 0000 1001 ;
     * */
    printf("\n____________________ OR gate ____________________\n");
    z = x | y;
    // z = 15 ; z = 0000 1111 ;
    printf("x | y = %d\n", z);
    printf("____________________ AND gate ____________________\n");
    z = x & y ;
    // z = 1 ; z = 0000 0001 ;
    printf("x & y = %d\n", z);
    printf("____________________ XOR gate ____________________\n");
    z = x ^ y ;
    // z = 14 ; z = 0000 1110
    printf("x ^ y = %d\n", z);
    printf("____________________ NOT gate ____________________\n");
    //z = x ~ y ;
    //printf("x ~ y = %d\n", z);
}
