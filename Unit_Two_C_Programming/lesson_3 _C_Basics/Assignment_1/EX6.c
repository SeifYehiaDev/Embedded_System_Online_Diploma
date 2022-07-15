/*
 * EX6.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                            Assignment EX6
   * Write Source Code to Swap Two Numbers
   * */
//                                                 _Solution_
void main() {
    float a, b, temp;
    printf("Enter value of a: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &a);
    printf("Enter value of b: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping, value of a = %.2f\nAfter swapping, value of b = %.2f", a, b);
}
/*                                                 _Output_
 * Enter value of a: 1.20
 * Enter value of b: 2.45
 *
 * After swapping, value of a = 2.45
 * After swapping, value of b = 1.2
 * */