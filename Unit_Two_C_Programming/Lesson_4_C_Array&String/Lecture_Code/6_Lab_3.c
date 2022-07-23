/*
 * 6_Lab_3.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 17
 * lab 3 : Calculate and Print the Transpose of 3x3 Matrix
 * */
//                                                 Solution
void main() {
    const int SIZE_OF_ROW = 3, SIZE_OF_COLUMN = 3, LENGTH_OF_ROW = SIZE_OF_ROW - 1, LENGTH_OF_COLUMN =SIZE_OF_COLUMN - 1;
    float matrix[SIZE_OF_ROW][SIZE_OF_COLUMN], transposeMatrix[SIZE_OF_COLUMN][SIZE_OF_ROW];
    int row, column;
    for (row = 0; row <= LENGTH_OF_ROW; row++)
        for (column = 0; column <= LENGTH_OF_COLUMN; column++) {
            printf("Enter the item (%d,%d) : ", row + 1, column + 1);
            fflush(stdout);fflush(stdin);
            scanf("%f", &matrix[row][column]);
        }
    printf("\nThe Matrix is : \n");
    for (row = 0; row <= LENGTH_OF_ROW; row++) {
        for (column = 0; column <= LENGTH_OF_COLUMN; column++)
            printf("%.2f\t", matrix[row][column]);
        printf("\n");
    }
    for (row = 0; row <= LENGTH_OF_COLUMN; row++)
        for (column = 0; column <= LENGTH_OF_ROW; column++)
            transposeMatrix[row][column] = matrix[column][row];
    printf("\nThe transpose matrix is : \n");
    for (row = 0; row <= LENGTH_OF_COLUMN; row++) {
        for (column = 0; column <= LENGTH_OF_ROW; column++)
            printf("%.2f\t", transposeMatrix[row][column]);
        printf("\n");
    }
}
/*                                                 _Output_
 * Enter the item (1,1) : 1
 * Enter the item (1,2) : 2
 * Enter the item (1,3) : 3
 * Enter the item (2,1) : 4
 * Enter the item (2,2) : 5
 * Enter the item (2,3) : 6
 * Enter the item (3,1) : 7
 * Enter the item (3,2) : 8
 * Enter the item (3,3) : 9
 *
 * The Matrix is :
 * 1.00    2.00    3.00
 * 4.00    5.00    6.00
 * 7.00    8.00    9.00
 *
 * The transpose matrix is :
 * 1.00    4.00    7.00
 * 2.00    5.00    8.00
 * 3.00    6.00    9.00
 * */
