/*
 * 7_String.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 19
 * String
 * initialization and declaration string ====> array of character
 * */
void main() {
    char messageOne[] = {'H', 'e', 'l', 'l', 'o',0}; // 0 ! '0' ------> end the print
    char messageTwo[] = "Hello"; // messageTwo[] = {'H', 'e', 'l', 'l', 'o',0}; ------> by default add 0 at end to end print
    printf("messageOne = %s\n", messageOne);
    printf("messageTwo = %s\n", messageTwo);
}
/*                                                 _Output_
 * messageOne = Hello
 * messageTwo = Hello
 * */