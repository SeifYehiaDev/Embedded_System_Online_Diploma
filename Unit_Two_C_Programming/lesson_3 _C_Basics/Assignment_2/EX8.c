/*
 * EX8.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <limits.h>
/*                                            Assignment EX8
   * EX8: C Program to Make a Simple Calculator to Add,Subtract,Multiply or Divided Using switch...case
   * */
//                                                 _Solution_
void main() {
    char operation;
    float firstNumber, secondNumber;
    printf("Enter operator either + or - or * or divide :");
    fflush(stdin);fflush(stdout);
    scanf("%c", &operation);
    printf("Enter two operands:\n");
    fflush(stdin);fflush(stdout);
    scanf("%f%f", &firstNumber, &secondNumber);
    switch (operation) {
        case '+':
            printf("%.1f + %.1f = %.1f", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f", firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%.1f / %.1f = %.1f", firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        default:
            printf("%c is invalid operation",operation);
    }
}
/*                                                 _Output_
 * Enter operator either + or - or * or divide : -
 * Enter two operands:
 * 3.4
 * 8.4
 * 3.4 - 8.4 = -5.0
 * */