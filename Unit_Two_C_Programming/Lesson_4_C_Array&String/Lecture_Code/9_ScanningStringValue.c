/*
 * 9_ScanningStringValue.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 24 and 25
 * Scanning String Value
 * this code explain how to accept string value from user.
 * */
void main() {
    char name[100];
    printf("Enter your full name >> \n");
    fflush(stdin);fflush(stdout);
    scanf("%s", name); // don't Accept space.
    printf("Your name is %s\n", name);
    printf("________________________ After solving the problem ________________________\n");
    char fullName[100];
    printf("Enter your full name >> \n");
    fflush(stdin);fflush(stdout);
    gets(fullName); // Accept space
    printf("Your name is %s\n", fullName);
}
/*                                                 _Output_
 * Enter your full name >>
 * Seif Yehia
 * Your name is Seif
 * ________________________ After solving the problem ________________________
 * Enter your full name >>
 * Seif Yehia
 * Your name is Seif Yehia
 * */