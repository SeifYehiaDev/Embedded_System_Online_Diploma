/*
 * EX7.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                            Assignment EX7
   * Write Source Code to Swap Two Numbers without temp variable.
   * */
//                                                 _Solution_
void main() {
    float a, b;
    printf("Enter value of a: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &a); // ---------------> 10
    printf("Enter value of b: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &b); // ---------------> 20
    a = a + b ; //  10 + 20 ; a = 30
    b = a - b ; //  30 - 20 ; b = 10
    a = a - b ; //  30 - 10 ; a = 20
    printf("\nAfter swapping, value of a = %.2f\nAfter swapping, value of b = %.2f", a, b);
}
/*                                                 _Output_
 * Enter value of a: 10.00
 * Enter value of b: 20.00
 *
 * After swapping, value of a = 20.00
 * After swapping, value of b = 10.00
 * */