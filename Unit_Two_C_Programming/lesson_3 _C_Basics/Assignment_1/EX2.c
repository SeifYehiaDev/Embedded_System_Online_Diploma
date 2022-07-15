/*
 * EX2.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                            Assignment EX2
   * Write C Program to Print an Integer Entered by a User
   * */
//                                                 _Solution_
void main() {
    int intNumberFromUser ;
    printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&intNumberFromUser);
    printf("You entered: %d",intNumberFromUser);
}
/*                                                 _Output_
 * Enter an integer: 25
 * You entered: 25
 * */