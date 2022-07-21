/*
 * 12_AddingStringToString.c
 *
 * Created on : 21/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <string.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 30
 * Adding String to String
 * this code explain how add string to string
 * */
void main() {
    char name[] = "Seif", lastName[] = "Yehia", space[] = " ";
    strcat(name, space);
    strcat(name, lastName);
    printf("Full Name = %s\n", name);
}
/*                                                 _Output_
 * Full Name = Seif Yehia
 * */