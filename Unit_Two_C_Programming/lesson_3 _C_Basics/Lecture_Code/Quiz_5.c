/*
 * Quiz_5.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

void main() {
    // Expect the output in page 111.
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            printf("\nComing out of loop when i = ");
            break;
        }
        printf("%d ", i);
    }
}
//                                                   _Output_
/* 0 1 2 3 4
 * Coming out of loop when i =
 * */