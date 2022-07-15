/*
 * Lab_6.0.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

void main() {
    /*                                          Question in unite two in lecture 3 page 116 .
     * Write a program that produces the following output: page 116.
     * */
    //                                                 _Solution_
    int indexOne, indexTwo;
    for (indexOne = 0; indexOne <= 10; indexOne++) {
        for (indexTwo = indexOne; indexTwo <= 9; indexTwo++)
            printf("%d ", indexTwo);
        printf("\n");
    }
}
/*                                                 _Output_
 * 0 1 2 3 4 5 6 7 8 9
 * 1 2 3 4 5 6 7 8 9
 * 2 3 4 5 6 7 8 9
 * 3 4 5 6 7 8 9
 * 4 5 6 7 8 9
 * 5 6 7 8 9
 * 6 7 8 9
 * 7 8 9
 * 8 9
 * 9
 * */