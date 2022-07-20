/*
 * 2_Array.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 6
 * Array
 * this code explain one dimension array
 * */
void main() {
    float degree[100], x = 9.9, y;
    degree[4] = x; // degree[4] = 9.900000
    y = degree[4]; // y = 9.900000
    printf("degree[4] = %f\ny = %f\n",degree[4], y);
    printf("Enter float value of degree[7] >>\n");
    scanf("%f", &degree[7]);
    printf("The eight item value is %f\n", degree[7]);
}
/*                                                 _Output_
 * degree[4] = 9.900000
 * y = 9.900000
 * Enter float value of degree[7] >>
 * 5.6
 * The eight item value is 5.600000
 * */