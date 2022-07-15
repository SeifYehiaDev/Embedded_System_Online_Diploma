/*
 * EX6.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <limits.h>
/*                                            Assignment EX6
   * EX6: C Program to Calculate the Sum of Natural Numbers.
   * */
//                                                 _Solution_
void main() {
    const int INT_USER_INPUT;
    int sumOfIntegerNumber = 0, index;
    printf("Enter an integer:");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &INT_USER_INPUT);
    for (index = 0; index <= INT_USER_INPUT; index++)
        sumOfIntegerNumber += index;
    printf("Sum = %d\n",sumOfIntegerNumber);

}
/*                                                 _Output_
 * Enter an integer: 100
 * Sum = 5050
 * */
