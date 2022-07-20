/*
 * 10_DataConversionAndCasting.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 26 and 27
 * Array of Strings and Printing Array of Strings
 * this code explain how declare and initialize Array of string and print it
 * */
void main() {
    const int SIZE_OF_NAMES_ARRAY = 4, LENGTH_OF_NAMES_ARRAY = SIZE_OF_NAMES_ARRAY - 1;
    char names[4][15] = {"Seif Yehia", "Mohamed Ali", "May Ahmed", "Ahmed Khaled"};
    int index;
    printf("Names Array is :\n");
    for (index = 0; index <= LENGTH_OF_NAMES_ARRAY; index++)
        printf("%s\n", names[index]);
}
/*                                                 _Output_
 * Names Array is :
 * Seif Yehia
 * Mohamed Ali
 * May Ahmed
 * Ahmed Khaled
 * */