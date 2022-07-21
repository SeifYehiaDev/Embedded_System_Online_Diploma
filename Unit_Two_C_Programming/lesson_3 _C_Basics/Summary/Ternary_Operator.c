/*
 * Ternary_Operator.c
 *
 * Created on : 18/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                                 Ternary operator
 *
 * */

void main() {
    char operator = '+';
    int num1 = 8;
    int num2 = 7;
    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
    printf("%d\n", result);
    printf("__________________________________________\n");
    int number = 3;
    printf("number = %d\n",number);
    (number % 2 == 0) ? printf("Even Number\n") : printf("Odd Number\n");
    number = 4 ;
    printf("number = %d\n",number);
    (number % 2 == 0) ? printf("Even Number\n") : printf("Odd Number\n");
    printf("__________________________________________\n");
    int a ;
    a = 0 ? 0 ? 100 : 200 : 300 ;
    printf("a = %d\n", a); // a = 300
    printf("__________________________________________\n");
    a = 1 ? 0 ? 100 : 200 : 300 ;
    printf("a = %d\n", a); // a = 200
    printf("__________________________________________\n");
    a = 1 ? 1 ? 100 : 200 : 300 ;
    printf("a = %d\n", a); // a = 100
}
