/*
 * EX1.c
 *
 * Created on : 21/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                      EX1: Example of multidimensional array in c
   * Write C Program to find sum of two matrix of order 2 * 2 using multidimensional array where , element of matrix are
   * entered by user
   * */
//                                                 _Solution_
void main() {
    const int SIZE_OF_ROW = 2, SIZE_OF_COLUMN = 2, LENGTH_OF_ROW = SIZE_OF_ROW - 1, LENGTH_OF_COLUMN =SIZE_OF_COLUMN - 1;
    float matrixOne[SIZE_OF_ROW][SIZE_OF_COLUMN], matrixTwo[SIZE_OF_ROW][SIZE_OF_COLUMN], sumOfMatrix[SIZE_OF_ROW][SIZE_OF_COLUMN];
    int row, column;
    // Accept Matrix one from user
    printf("Enter the elements of 1st matrix\n");
    for (row = 0; row <= LENGTH_OF_ROW; row++)
        for (column = 0; column <= LENGTH_OF_COLUMN; column++) {
            printf("Enter a%d%d: ", row + 1, column + 1);
            scanf("%f", &matrixOne[row][column]);
        }
    // Accept Matrix two from user
    printf("Enter the elements of 2nd matrix\n");
    for (row = 0; row <= LENGTH_OF_ROW; row++)
        for (column = 0; column <= LENGTH_OF_COLUMN; column++) {
            printf("Enter b%d%d: ", row + 1, column + 1);
            scanf("%f", &matrixTwo[row][column]);
        }
    // Sum of two matrix
    for (row = 0; row <= LENGTH_OF_ROW; row++)
        for (column = 0; column <= LENGTH_OF_COLUMN; column++)
            sumOfMatrix[row][column] = matrixOne[row][column] + matrixTwo[row][column];
    // Display sum of two matrix
    printf("Sum of Matrix\n");
    for (row = 0; row <= LENGTH_OF_ROW; row++) {
        for (column = 0; column <= LENGTH_OF_COLUMN; column++)
            printf("%.1f\t", sumOfMatrix[row][column]);
        printf("\n"); // to make no line between rows
    }
}
/*                                                 _Output_
 * Enter the elements of 1st matrix
 * Enter a11: 2
 * Enter a12: 0.5
 * Enter a21: -1.1
 * Enter a22: 2
 * Enter the elements of 2nd matrix
 * Enter b11: 0.2
 * Enter b12: 0
 * Enter b21: 0.23
 * Enter b22: 23
 * Sum of Matrix
 * 2.2     0.5
 * -0.9    25.0
 * */