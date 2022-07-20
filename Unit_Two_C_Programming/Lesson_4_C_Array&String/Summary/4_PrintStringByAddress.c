/*
 * 4_PrintStringByAddress.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                                      String
 * this code explain how to print string at a specific address.
 * */
void main() {
    char x[7];
    x[0] = 'h';
    x[1] = 'e';
    x[2] = 0;
    x[3] = 'l';
    x[4] = 'l';
    x[5] = 0;
    printf("%s \n", x);     // he
    printf("%s \n", &x[0]); // he
    printf("%s \n", &x[1]); // e
    printf("%s \n", &x[3]); // ll
}
/*                                                 _Output_
 * he
 * he
 * e
 * ll
 * */