/*
 * EX2.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                            Assignment EX2
   * EX2: C Program to Check Vowel or Consonant.
   * */
//                                                 _Solution_
void main() {
    char charUserInput;
    printf("Enter an alphabet:\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &charUserInput);
    switch (charUserInput) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
            printf("%c is a vowel.\n",charUserInput);
            break;
        default:
            printf("%c is a consonant.\n",charUserInput);
    }
}
/*                                                 _Output 1_
 * Enter an alphabet:
 * i
 * i is a vowel.
 * */

/*                                                 _Output 2_
 * Enter an alphabet:
 * G
 * G is a consonant.
 * */