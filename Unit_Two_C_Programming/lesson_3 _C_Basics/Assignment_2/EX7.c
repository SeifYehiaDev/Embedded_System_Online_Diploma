/*
 * EX7.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <limits.h>
/*                                            Assignment EX7
   * EX7: C Program to Find Factorial of a Number.
   * */
//                                                 _Solution_
void main() {
    const int INT_USER_INPUT;
    int factorial = 1, index;
    printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &INT_USER_INPUT);
    if (INT_USER_INPUT > 0) {
        for (index = 1; index <= INT_USER_INPUT; index++)
            factorial *= index;
        printf("Factorial = %d\n", factorial);
    } else
        printf("Error!!! Factorial of negative number doesn't exist.\n");
}
/*                                                 _Output 1_
 * Enter an integer: -5
 * Error!!! Factorial of negative number doesn't exist.
 * */

/*                                                 _Output 2_
 * Enter an integer: 10
 * Factorial = 3628800
 * */
