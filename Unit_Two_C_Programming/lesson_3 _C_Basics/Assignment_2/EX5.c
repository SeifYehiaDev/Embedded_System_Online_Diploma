/*
 * EX5.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <limits.h>
/*                                            Assignment EX5
   * EX5: C Program to Check Whether a Character is an Alphabet or not.
   * */
//                                                 _Solution_
void main() {
    char charUserInput;
    printf("Enter a character:");
    fflush(stdin);fflush(stdout);
    scanf("%c", &charUserInput);
    if ((charUserInput >= 'A' && charUserInput <= 'Z') || (charUserInput >= 'a' && charUserInput <= 'z'))
        printf("%c is an alphabet.\n", charUserInput);
    else
        printf("%c is not an alphabet.\n", charUserInput);
}
/*                                                 _Output 1_
 * Enter a character: *
 * * is not an alphabet.
 * */

/*                                                 _Output 1_
 * Enter a character: K
 * K is not an alphabet.
 * */