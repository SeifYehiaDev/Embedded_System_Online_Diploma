/*
 * 17_RandomValue.c
 *
 * Created on : 21/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdlib.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 38
 * RandomValue
 * this code explain how set value or array random
 * */
void main() {
    int array[1000], index;
    for (index = 0; index <= 999; index++)
        array[index] = rand();
}


