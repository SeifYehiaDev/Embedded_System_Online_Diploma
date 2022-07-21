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
 * How to get length using loop
 * */
void main() {
    char name[] = "Seif Yehia";
    const int LENGTH_OF_STRING = strlen(name);
    int index, length = 0;
    printf("Length of string calculate by strlen() = %d\n", LENGTH_OF_STRING);
    for (index = 0; name[index] != 0; index++)
        length += 1;
    printf("Length of string calculate by loop = %d\n", length);


}
/*                                                 _Output_
 * Length of string calculate by strlen() = 10
 * Length of string calculate by loop = 10
 * */
