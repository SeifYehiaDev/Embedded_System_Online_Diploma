/*
 * 16_ConvertingStringToInteger.c
 *
 * Created on : 21/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <stdlib.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 36
 * Converting String to Integer Value
 * this code explain how convert string to integer
 * */
void main() {
    int firstNumber, secondNumber, result;
    char userInput[20];
    printf("Enter the first number >> \n");
    gets(userInput);
    firstNumber = atoi(userInput);
    printf("Enter the second number >> \n");
    gets(userInput);
    secondNumber = atoi(userInput);
    result = firstNumber + secondNumber ;
    printf("The result is %d\n",result);
}
/*                                                 _Output_
 * Enter the first number >>
 * 3
 * Enter the second number >>
 * 5
 * The result is 8
 * */

