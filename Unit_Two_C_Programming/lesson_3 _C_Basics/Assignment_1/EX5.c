/*
 * EX5.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                            Assignment EX5
   * Write C Program to Find ASCII Value of a Character
   * */
//                                                 _Solution_
void main() {
    char charFromUser ;
    printf("Enter a character: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&charFromUser);
    printf("ASCII value of %c = %d \n",charFromUser,charFromUser);
}
/*                                                 _Output_
 * Enter a character: G
 * ASCII value of G = 71
 * */