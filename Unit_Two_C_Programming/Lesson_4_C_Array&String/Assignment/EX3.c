/*
 * EX3.c
 *
 * Created on : 23/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                      EX3: C program to find transpose of a matrix
   * this program asks user to enter a matrix (size of matrix is specified by user) and this program find the transpose
   * of that matrix and display it.
   * */
//                                                 _Solution_
void main() {
    int sizeOfRow, sizeOfColumn, row, column;
    printf("Enter rows and column of matrix : \n");
    scanf("%d%d", &sizeOfRow, &sizeOfColumn);
    while (sizeOfRow <= 0 || sizeOfColumn <= 0) {
        printf("!!Error number should > 0 for row and colum.\n");
        printf("Enter rows and column of matrix again: \n");
        scanf("%d%d", &sizeOfRow, &sizeOfColumn);
    }
    int matrix[sizeOfRow][sizeOfColumn], transpose[sizeOfColumn][sizeOfRow]; // matrix[2][3], transpose[3][2];
    printf("Enter elements of matrix:\n");
    for (row = 0; row <= sizeOfRow - 1; row++)
        for (column = 0; column <= sizeOfColumn - 1; column++) {
            printf("Enter element a%d%d: ", row + 1, column + 1);
            scanf("%d", &matrix[row][column]);
        }
    printf("Entered Matrix:\n");
    for (row = 0; row <= sizeOfRow - 1; row++) {
        for (column = 0; column <= sizeOfColumn - 1; column++)
            printf("%d\t", matrix[row][column]);
        printf("\n");
    }
    for (row = 0; row <= sizeOfColumn - 1; row++)
        for (column = 0; column <= sizeOfRow - 1; column++)
            transpose[row][column] = matrix[column][row];

    printf("Transpose of matrix:\n");
    for (row = 0; row <= sizeOfColumn - 1; row++) {
        for (column = 0; column <= sizeOfRow - 1; column++)
            printf("%d\t", transpose[row][column]);
        printf("\n");
    }
}
/*                                                 _Output_
 * Enter rows and column of matrix :
 * 2
 * 3
 * Enter elements of matrix:
 * Enter element a11: 1
 * Enter element a12: 2
 * Enter element a13: 9
 * Enter element a21: 0
 * Enter element a22: 4
 * Enter element a23: 7
 * Entered Matrix:
 * 1       2       9
 * 0       4       7
 * Transpose of matrix:
 * 1       0
 * 2       4
 * 9       7
 * */