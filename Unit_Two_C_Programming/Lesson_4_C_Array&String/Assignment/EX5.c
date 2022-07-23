/*
 * EX5.c
 *
 * Created on : 23/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
/*                                      EX5: C program to Search an element in array
   *
   * */
//                                                 _Solution_
void main() {
    int sizeOfArray, location = 0, numberSearch, row;
    printf("Enter no of elements : ");
    scanf("%d", &sizeOfArray);
    while (sizeOfArray <= 0) {
        printf("!!Error number should > 0.\n");
        printf("Enter no of elements again : ");
        scanf("%d", &sizeOfArray);
    }
    int matrix[sizeOfArray];
    for (row = 0; row <= sizeOfArray - 1; row++)
        scanf("%d", &matrix[row]);
    printf("Enter the element to be Searched : ");
    scanf("%d", &numberSearch);
    for (row = 0; row <= sizeOfArray - 1; row++)
        if (matrix[row] == numberSearch) {
            location = row + 1;
            break;
        }
    (location != 0) ? printf("Number found at location = %d", location) : printf("%d not found");

}
/*                                                 _Output_
 * Enter no of elements : 5
 * 11 22 33 44 55
 * Enter the element to be Searched : 44
 * Number found at location = 4
 * */