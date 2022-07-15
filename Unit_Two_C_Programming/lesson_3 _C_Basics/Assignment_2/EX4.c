/*
 * EX4.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <limits.h>
/*                                            Assignment EX4
   * EX4: C Program to Check Whether a Number is Positive or Negative.
   * */
//                                                 _Solution_
void main() {
    float numberUserInput;
    printf("Enter a number: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &numberUserInput);
    if (numberUserInput > 0)
        printf("%.2f is positive.\n",numberUserInput);
    else if (numberUserInput < 0)
        printf("%.2f is negative.\n",numberUserInput);
    else
        printf("You enter zero.\n");
}
/*                                                 _Output 1_
 * Enter a number: 12.3
 * 12.30 is positive.
 * */

/*                                                 _Output 2_
 * Enter a number: 0
 * You enter zero.
 * */