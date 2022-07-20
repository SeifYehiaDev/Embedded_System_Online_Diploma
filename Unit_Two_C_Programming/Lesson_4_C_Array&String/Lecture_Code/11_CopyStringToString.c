/*
 * 11_CopyStringToString.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <string.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 28 and 29
 * Copy String to String
 * this code explain how copy string two string using loop and strcpy function
 * */
void main() {
    printf("_______________________ copy string to string using loop _______________________\n");
    char name[20] = "Seif Yehia";
    char myName[20];
    char myFullName[20];
    int index = 0;
    for (index = 0; name[index] != 0; index++)
        myName[index] = name[index];
    myName[index] = 0; // to add zero at last array (myName)
    printf("Myname = %s\n", myName);
    printf("_______________________ copy string to string using strcpy _______________________\n");
    strcpy(myFullName, name); // copy name in one line using strcpy
    printf("myFullName = %s\n", myFullName);
}
/*                                                 _Output_
 * _______________________ copy string to string using loop _______________________
 * Myname = Seif Yehia
 * _______________________ copy string to string using strcpy _______________________
 * myFullName = Seif Yehia
 * */