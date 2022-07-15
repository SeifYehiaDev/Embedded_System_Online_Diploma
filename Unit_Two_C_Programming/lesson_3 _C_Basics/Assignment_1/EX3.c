/*
 * EX3.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                            Assignment EX3
   * Write C Program to Add Two Integers
   * */
//                                                 _Solution_
void main() {
    int intFirstNumber , intSecondNumber , sumOfTwoNumber ;
    printf("Enter two integers: \n");
    fflush(stdin);fflush(stdout);
    scanf("%d%d",&intFirstNumber,&intSecondNumber);
    sumOfTwoNumber = intFirstNumber + intSecondNumber ;
    printf("Sum: %d\n",sumOfTwoNumber);
}
/*                                                 _Output_
 * Enter two integers:
 * 12
 * 11
 * Sum: 23
 * */