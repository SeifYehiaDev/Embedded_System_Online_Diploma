/*
 * EX3.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <limits.h>
/*                                            Assignment EX3
   * EX3: C Program to Find the Largest Number Among Three Numbers.
   * */
//                                                 _Solution_
void main() {
    float firstNumber, secondNumber, thirdNumber, maxNumber = INT_MIN;
    printf("Enter three numbers:\n");
    fflush(stdin);fflush(stdout);
    scanf("%f%f%f", &firstNumber, &secondNumber, &thirdNumber);
    if (firstNumber > secondNumber && firstNumber > thirdNumber)
        maxNumber = firstNumber;
    else if (secondNumber > firstNumber && secondNumber > thirdNumber)
        maxNumber = secondNumber;
    else
        maxNumber = thirdNumber;
    printf("Largest number = %.2f", maxNumber);

}
/*                                                 _Output_
 * Enter three numbers:
 * 12.2
 * 13.452
 * 10.193
 * Largest number = 13.45
 * */