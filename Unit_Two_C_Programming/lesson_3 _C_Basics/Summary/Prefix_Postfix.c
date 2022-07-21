/*
 * Prefix_Postfix.c
 *
 * Created on : 14/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

void main() {
    int x = 19, y = 0;
    printf("x = %d\n", x);
    x++;
    // 19 + 1 = 20
    printf("x++ = %d\n", x);
    x--;
    // 20 - 1 = 19
    printf("x-- = %d\n", x);
    printf("___________________________________________________\n");
    x = 10;
    y = 5;
    printf("x = %d & y = %d\n", x, y);
    x = x + y++;
    // 10 + 5 = 15
    printf("x + y++ = %d\n", x);
    printf("x = %d & y = %d\n", x, y);
    printf("___________________________________________________\n");
    x = 10;
    y = 5;
    printf("x = %d & y = %d\n", x, y);
    x = x + ++y;
    // 10 + 6 = 16
    printf("x + ++y = %d\n", x);
    printf("x = %d & y = %d\n", x, y);
}
