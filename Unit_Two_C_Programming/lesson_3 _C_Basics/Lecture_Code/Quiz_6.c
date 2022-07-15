/*
 * Quiz_6.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

void main() {
    // Expect the output in page 113.
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 5 || i == 6) {
            printf("\nSkipping %d from display using continue statement \n",i);
            continue;
        }
        printf("%d ", i);
    }
}
//                                                   _Output_
/* 0 1 2 3 4
 * Skipping 5 from display using continue statement
 *
 * Skipping 6 from display using continue statement
 * 7 8 9
 * */