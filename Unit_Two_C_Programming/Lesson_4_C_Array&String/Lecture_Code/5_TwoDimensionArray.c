/*
 * 5_TwoDimensionArray.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 16
 * Following code section shows how to use 2D arrays:
 * this code explain two dimension array
 * */
void main() {
    int x = 90, row, column;
    int degree[4][6] = {{36, 28, 76, 47, 82, 33},
                        {75, 49, 38, 98, 59, 83},
                        {82, 65, 10, 21, 86, 22},
                        {25, 63, 65, 76, 37, 21}};
    printf("\nthe array before editing is :\n");
    for (row = 0; row <= 4 - 1; row++) {
        for (column = 0; column <= 6 - 1; column++)
            printf("%d ", degree[row][column]);
        printf("\n");
    }
    degree[2][3] = x; //degree[2][3] = 90 ;
    degree[1][4] = 21;
    printf("\nthe array after editing is :\n");
    for (row = 0; row <= 4 - 1; row++) {
        for (column = 0; column <= 6 - 1; column++)
            printf("%d ", degree[row][column]);
        printf("\n");
    }
}
/*                                                 _Output_
 * the array before editing is :
 * 36 28 76 47 82 33
 * 75 49 38 98 59 83
 * 82 65 10 21 86 22
 * 25 63 65 76 37 21
 *
 * the array after editing is :
 * 36 28 76 47 82 33
 * 75 49 38 98 21 83
 * 82 65 10 90 86 22
 * 25 63 65 76 37 21
 * */