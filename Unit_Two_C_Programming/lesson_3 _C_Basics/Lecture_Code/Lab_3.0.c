/*
 * Lab_3.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <limits.h>

void main() {
    /*                                          Question in unite two in lecture 3 page 93 .
     *Calculate the Minimum of two Numbers.
 * */
    //                                                 _Solution_
    int firstNumber, lasNumber, minNumber = INT_MAX;
    printf("Please enter the two values >> \n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d%d", &firstNumber, &lasNumber);
    minNumber = (firstNumber < lasNumber) ? firstNumber : lasNumber;
    printf("The minimum value is %d\n", minNumber);
    //                                                 _Output_
    /*
     *Please enter the three values >>
     *40
     *30
     *The minimum value is 30
     * */
}