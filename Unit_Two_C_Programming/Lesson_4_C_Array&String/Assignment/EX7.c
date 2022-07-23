/*
 * EX7.c
 *
 * Created on : 23/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <string.h>
/*                                      EX7: C program to find the length of a string
   *
   * */
//                                                 _Solution_
void main() {
    char string[1000];
    int index, length = 0;
    printf("Enter the string : ");
    gets(string);
    for (index = 0; string[index] != 0; index++)
        length += 1;
    printf("Length of string: %d\n", length);


}
/*                                                 _Output_
 * Enter a string: Programiz
 * Length of string: 9
 * */