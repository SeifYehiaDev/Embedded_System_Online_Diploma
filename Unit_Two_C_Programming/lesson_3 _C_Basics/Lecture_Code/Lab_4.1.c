/*
 * Lab_4.1.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

void main() {
    /*                                          Question in unite two in lecture 3 page 105 .
     *Calculate the summation of values between 1 and 99. using while loop.
 * */
    //                                                 _Solution_
    int sumOfValue = 0, index = 0;
    while (index <= 99) {
        sumOfValue += index;
        index++;
    }
    printf("Summation of values between (1 and 99) is : %d\n", sumOfValue);
}
    //                                                 _Output_
    // Summation of values between (1 and 99) is : 4950
