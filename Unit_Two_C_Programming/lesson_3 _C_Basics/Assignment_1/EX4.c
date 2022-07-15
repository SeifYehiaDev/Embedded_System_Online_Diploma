/*
 * EX4.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                            Assignment EX4
   * Write C Program to Multiply two Floating Point Numbers
   * */
//                                                 _Solution_
void main() {
    float floatFirstNumber , floatSecondNumber , multiplyOfTwoNumber ;
    printf("Enter two numbers: \n");
    fflush(stdin);fflush(stdout);
    scanf("%f%f",&floatFirstNumber,&floatSecondNumber);
    multiplyOfTwoNumber = floatFirstNumber * floatSecondNumber ;
    printf("Product: %f\n",multiplyOfTwoNumber);
}
/*                                                 _Output_
 * Enter two numbers:
 * 2.4
 * 1.1
 * Product: 2.640000
 * */