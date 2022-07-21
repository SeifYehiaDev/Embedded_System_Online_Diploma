/*
 * 14_LengthOfString.c
 *
 * Created on : 21/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <string.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 32
 * Finding the String Length
 * this code explain how to return length of string
 * */
void main() {
    char name[] = "Seif Yehia"; // "S e i f _ Y e h i a" -------> lengthOfString = 10
    const int LENGTH_OF_STRING = strlen(name);
    printf("name = \"%s\"\n", name);
    printf("Length of string name = %d\n", LENGTH_OF_STRING);
}
/*                                                 _Output_
 * name = "Seif Yehia"
 * Length of string name = 10
 * */