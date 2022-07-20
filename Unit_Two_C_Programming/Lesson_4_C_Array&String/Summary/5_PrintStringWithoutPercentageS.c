/*
 * 5_PrintStringWithoutPercentageS.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                                      String
 * this code explain how to print string without percentage s
 * */
void main() {
    char array[] = {'h', 'e', 'l', 'l', 'o', 0};
    printf("%s \n", &array);
    // write code work as printf(%s)
    int index;
    for (index = 0; index <= sizeof(array) && array[index] != 0; index++)
        printf("%c", array[index]);
}
/*                                                 _Output_
 * hello
 * hello
 * */
