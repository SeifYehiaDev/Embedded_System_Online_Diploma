/*
 * 7_LengthOfString.c
 *
 * Created on : 21/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <string.h>


/*                                      String
 * How to get length of string using loop
 * */
void main() {
    char name[] = "Seif Yehia";
    const int LENGTH_OF_STRING = strlen(name);
    int index, lengthOfString = 0;
    printf("Length of string calculate by strlen() = %d\n", LENGTH_OF_STRING);
    for (index = 0; name[index] != 0; index++)
        lengthOfString += 1;
    printf("Length of string calculate by loop = %d\n", lengthOfString);


}
/*                                                 _Output_
 * Length of string calculate by strlen() = 10
 * Length of string calculate by loop = 10
 * */
