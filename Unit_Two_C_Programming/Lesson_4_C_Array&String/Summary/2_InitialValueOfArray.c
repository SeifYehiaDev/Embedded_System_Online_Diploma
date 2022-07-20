/*
 * 2_InitialValueOfArray.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                                      initialization of array
 * initialization of array
 * this code explain how initialize value of array
 * */
void main() {
    int index;
    int intOfArray[] = {1, 2, 3, 4};
    printf("intOfArray[] = ");
    for (index = 0; index <= 4 - 1; index++)
        printf("%d ", intOfArray[index] );
    double doubleOfArray[4] = {1.0, 2.0, 3.0, 4.0};
    printf("\ndoubleOfArray[4] = ");
    for (index = 0; index <= 4 - 1; index++)
        printf("%f ", doubleOfArray[index] );
}
/*                                                 _Output_
 * intOfArray[] = 1 2 3 4
 * doubleOfArray[4] = 1.000000 2.000000 3.000000 4.000000
 * */
