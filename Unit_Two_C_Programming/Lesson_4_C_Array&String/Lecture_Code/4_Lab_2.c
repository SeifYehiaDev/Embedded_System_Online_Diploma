/*
 * 4_Lab_2.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 12
 * lab 2 : Calculate polynomial value for a set of inputs
 * */
//                                                 Solution
void main() {
    float x, y;
    printf("\n_______________ Without using array _______________\n");
    x = 5;
    y = 5 * x * x + 3 * x + 2;
    printf("y(%f) = %f\n", x, y);
    x = 16;
    y = 5 * x * x + 3 * x + 2;
    printf("y(%f) = %f\n", x, y);
    x = 22;
    y = 5 * x * x + 3 * x + 2;
    printf("y(%f) = %f\n", x, y);
    x = 3.5;
    y = 5 * x * x + 3 * x + 2;
    printf("y(%f) = %f\n", x, y);
    x = 15;
    y = 5 * x * x + 3 * x + 2;
    printf("y(%f) = %f\n", x, y);
    printf("_______________ using array the same result _______________\n");
    int index;
    const int SIZE_OF_FLOAT_ARRAY = 5, LENGTH_OF_ARRAY = SIZE_OF_FLOAT_ARRAY - 1;
    float xOfArray[] = {5, 16, 22, 3.5, 15}; // float floatDegreesArray[5] = {5, 16, 22, 3.5, 15};
    for (index = 0; index <= LENGTH_OF_ARRAY; index++) {
        y = 5 * xOfArray[index] * xOfArray[index] + 3 * xOfArray[index] + 2;
        printf("y(%f) = %f\n", xOfArray[index], y);
    }
}
/*                                                 _Output_
 * _______________ Without using array _______________
 * y(5.000000) = 142.000000
 * y(16.000000) = 1330.000000
 * y(22.000000) = 2488.000000
 * y(3.500000) = 73.750000
 * y(15.000000) = 1172.000000
 * _______________ using array the same result _______________
  * y(5.000000) = 142.000000
 * y(16.000000) = 1330.000000
 * y(22.000000) = 2488.000000
 * y(3.500000) = 73.750000
 * y(15.000000) = 1172.000000
 * */
