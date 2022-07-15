/*
 * Lab_2.0.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <limits.h>

void main() {
    /*                                          Question in unite two in lecture 3 page 90 .
 * This program finds the largest value of the three given values.
 * */
    //                                                 _Solution_
    int firstNumber, lasNumber, thirdNumber, maxNumber = INT_MIN;
    printf("Please enter the three values >> \n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d%d%d", &firstNumber, &lasNumber, &thirdNumber);
    if (firstNumber > lasNumber && firstNumber > thirdNumber)
        maxNumber = firstNumber;
    else if (lasNumber > firstNumber && lasNumber > thirdNumber)
        maxNumber = lasNumber;
    else
        maxNumber = thirdNumber;
    printf("The largest value is %d\n", maxNumber);
}
//                                                 _Output_
/*
 *Please enter the three values >>
 *1
 *2
 *3
 *The largest value is 3
 * */

