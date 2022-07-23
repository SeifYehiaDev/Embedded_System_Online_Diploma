/*
 * EX4.c
 *
 * Created on : 23/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                      EX4: C program to insert an element in an array
   *
   * */
//                                                 _Solution_
void main() {
    int sizeOfArray, location, row, temp;
    printf("Enter no of elements : ");
    scanf("%d", &sizeOfArray);
    while (sizeOfArray <= 0) {
        printf("!!Error number should > 0.\n");
        printf("Enter no of elements again : ");
        scanf("%d", &sizeOfArray);
    }
    sizeOfArray += 1;
    int matrix[sizeOfArray];
    for (row = 0; row <= sizeOfArray - 2; row++)
        scanf("%d", &matrix[row]);
    printf("Enter the element to be inserted : ");
    scanf("%d", &matrix[sizeOfArray - 1]);
    printf("Enter the location : ");
    scanf("%d", &location);
    while (location <= 0 || location > sizeOfArray - 1) {
        printf("!!Error location not found.\n");
        printf("Enter the location again : ");
        scanf("%d", &location);
    }
    for (row = sizeOfArray - 1; row > location - 1; row--) {
        temp = matrix[row];
        matrix[row] = matrix[row - 1];
        matrix[row - 1] = temp;
    }
    for (row = 0; row <= sizeOfArray - 1; row++)
        printf("%d ", matrix[row]);
}
/*                                                 _Output_
 * Enter no of elements : 5
 * 1 2 3 4 5
 * Enter the element to be inserted : 6
 * Enter the location : 2
 * 1 6 2 3 4 5
 * */