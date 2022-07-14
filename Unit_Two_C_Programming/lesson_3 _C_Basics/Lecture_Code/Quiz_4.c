/*
 * Quiz_4.c
 *
 * Created on : 14/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

void main() {
    // using conditions ---------------> Expect the output ?
    int a = 9, b = 8, c = 12;
    printf("\na = %d & b = %d & c = %d\n", a, b, c);
    printf("a > b = %d\n", a > b); // 9 > 8 = 1
    printf("b > c = %d\n", b > c); // 8 > 12 = 0
    printf("a <= 9 = %d\n", a <= 9); // 9 <= 9 = 1
    printf("a != 9 = %d\n", a != 9); // 9 != 9 = 0
    printf("(a - b) > (c - b) = %d\n", (a - b) > (c - b)); // 1 > 4 = 0
    printf("a > b && c > b = %d\n", a > b && c > b); // 1 && 1 = 1
    printf("a > b && c < b = %d\n", a > b && c < b); // 1 && 0 = 0
    printf("a > b || c < b = %d\n", a > b || c < b); // 1 || - = 1
    printf("!(a < b) = %d\n", !(a < b)); // !0 = 1
    printf("3 && 0 = %d\n", 3 && 0); // 1 && 0 = 0
    printf("-15 || 0 = %d\n", -15 || 0); // 1 || 0 = 1
    printf("15 || 0 = %d\n", 15 || 0); // 1 || 0 = 1
    printf("!(-15) = %d\n", !(-15)); // !1 = 0
}