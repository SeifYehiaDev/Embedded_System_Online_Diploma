/*
 * EX2.c
 *
 * Created on : 21/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <limits.h>
/*                                      EX2: C program to calculate Average using arrays
   * This program takes n number of element from user (where , n is specified by user) , stored data in array and calculate
   * the average of those number
   * */
//                                                 _Solution_
void main() {
    float floatArray[100], sum = 0.0, average;
    int index, sizeOfArray = INT_MIN;
    printf("Enter the number of data : \n");
    scanf("%d", &sizeOfArray);
    while (sizeOfArray <= 0) {
        printf("Error! number should in range (1 to 100).\n");
        printf("Enter the number again: \n");
        scanf("%d", &sizeOfArray);
    }
    for (index = 0; index <= sizeOfArray - 1; index++) {
        printf("%d. Enter the number: \n", index + 1);
        scanf("%f", &floatArray[index]);
        sum += floatArray[index];
    }
    average = sum / sizeOfArray;
    printf("Average = %.2f\n", sum / sizeOfArray);
}
/*                                                 _Output_
 * Enter the number of data : 6
 * 1. Enter the number: 45.3
 * 2. Enter the number: 67.5
 * 3. Enter the number: -45.6
 * 4. Enter the number: 20.34
 * 5. Enter the number: 33
 * 6. Enter the number: 45.6
 * Average = 27.69
 * */