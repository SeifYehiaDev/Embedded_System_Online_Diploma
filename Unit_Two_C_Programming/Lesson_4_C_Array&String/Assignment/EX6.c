/*
 * EX6.c
 *
 * Created on : 23/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                      EX6: C program to find the frequency of character in a string
   * this program asks user to enter a string and a character and this program checks how many times that
   * character is repeated in the string entered by user.
   * */
//                                                 _Solution_
void main() {
    char string[1000], charUserInput;
    int index, frequency = 0;
    printf("Enter a string: ");
    gets(string);
    printf("Enter a character to find frequency:");
    scanf("%c", &charUserInput);
    for (index = 0; string[index] != 0; index++)
        if (string[index] == charUserInput)
            frequency += 1;
    (frequency != 0) ? printf("Frequency of %c = %d\n", charUserInput, frequency) : printf("%c not found\n",
                                                                                           charUserInput);

}
/*                                                 _Output_
 * Enter a string: this website is awesome.
 * Enter a character to find frequency:e
 * Frequency of e = 4
 * */