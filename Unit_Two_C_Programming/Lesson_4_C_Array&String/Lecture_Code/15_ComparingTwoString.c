/*
 * 15_ComparingTwoString.c
 *
 * Created on : 21/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 33
 * Comparing Two Strings
 * this code explain how to compare two string
 * */
void main() {
    char names[5][20] = {"Seif Yehia", "Ahmed Khaled", "Ahmed Mahmoud", "Tamer Ali", "Samy Elsayed"};
    const int SIZE_OF_STRING_ARRAY = 5, LENGTH_OF_STRING_ARRAY = SIZE_OF_STRING_ARRAY - 1;
    char nameFromUser[20];
    bool isFind = 0;
    int index;
    printf("Enter your name >> \n");
    fflush(stdin);
    fflush(stdout);
    gets(nameFromUser);
    for (index = 0; index <= LENGTH_OF_STRING_ARRAY; index++) {
        bool isIgnoreCompare = (stricmp(nameFromUser, names[index]));
        if (isIgnoreCompare == 0) {
            printf("Congratulation , your name is find in the list");
            isFind = 1;
            break;
        }
    }
    if (!isFind)
        printf("We are sorry , your name is not listed");
}
/*                                                 _Output 1_
 * Enter your name >>
 * SeIf YeHIA
 * Congratulation , your name is find in the list
 * */

/*                                                 _Output 2_
 * Enter your name >>
 * Mazen Ali
 * We are sorry , your name is not listed
 * */
