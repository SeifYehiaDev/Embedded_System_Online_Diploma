/*
 * EX1.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                            Assignment EX1
   * EX1: Write C Program to check Whether a Number is Even or Odd.
   * */
//                                                 _Solution_
void main() {
    int integerUserInput;
    printf("Enter an integer you want to check: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&integerUserInput);
    if (integerUserInput % 2 == 0)
        printf("%d is even.\n", integerUserInput);
    else
        printf("%d is odd.\n", integerUserInput);
}
/*                                                 _Output 1_
 * Enter an integer you want to check: 25
 * 25 is odd.
 * */

/*                                                 _Output 2_
 * Enter an integer you want to check: 12
 * 12 is even.
 * */