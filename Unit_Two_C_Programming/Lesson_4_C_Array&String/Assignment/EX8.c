/*
 * EX8.c
 *
 * Created on : 23/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <string.h>
/*                                      EX8: C program to find the length of a string
   *
   * */
//                                                 _Solution_
void main() {
    char string[1000], reverse[1000];
    int index, length;
    printf("Enter the string : ");
    gets(string);
    length = strlen(string) - 1;
    for (index = length; index >= 0; index--)
        reverse[length - index] = string[index];
    printf("Reverse string is : %s", reverse);

}
/*                                                 _Output_
 * Enter the string : Pritesh
 * Reverse string is : hsetirP
 * */