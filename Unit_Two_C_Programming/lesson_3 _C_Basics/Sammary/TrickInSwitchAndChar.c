/*
 * TrickInSwitchAndChar .c
 *
 * Created on : 19/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>



void main() {
    // char ch = 'a' = 97; ==========> Error
    char ch = 'a';
    switch (ch) {
        case 'a':
            printf("Hello");
            break;
        case 97 : // Error because ASCII code of a = 97 , case 'a' : = case 97 : ==========> Error in switch statement
            printf("Hello");
    }
