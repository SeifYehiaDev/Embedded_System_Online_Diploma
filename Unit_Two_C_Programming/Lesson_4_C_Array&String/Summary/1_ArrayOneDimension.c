/*
 * 1_ArrayOneDimension.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                                      One dimension Array
 * One dimension array
 * this code explain how to declare and initialize one dimension array and how to set size of array and calculate size of array and print value of array
 * */
void main() {
    printf("\n_________________ Integer Array _________________\n");
    const int SIZE_OF_INT_ARRAY = 2; // should be integer number.
    int intArray[SIZE_OF_INT_ARRAY]; // int intArray[2] ; == int intArray[1+1];
    printf("Size of array is %d.\n", SIZE_OF_INT_ARRAY);
    intArray[0] = 1;
    intArray[1] = 2;
    printf("intArray[0] = %d , intArray[1] = %d.\nsize of int array = 4 byte * %d (size) = %d byte.\n",intArray[0], intArray[1], SIZE_OF_INT_ARRAY, sizeof(intArray));
    printf("\n_________________ Double Array _________________\n");
    int SIZE_OF_Double_ARRAY = 3; // should be integer number.
    double doubleArray[SIZE_OF_Double_ARRAY]; // double doubleArray[3]; == double doubleArray[2+1];
    printf("Size of array is %d.\n", SIZE_OF_Double_ARRAY);
    doubleArray[0] = 1.0;
    doubleArray[1] = 2.0;
    doubleArray[2] = 3.0;
    printf("floatArray[0] = %f , floatArray[1] = %f , floatArray[2] = %f.\nsize of double array = 8 byte * %d (size) = %d byte.\n",doubleArray[0], doubleArray[1], doubleArray[2], SIZE_OF_Double_ARRAY, sizeof(doubleArray));
}
/*                                                 _Output_
 * _________________ Integer Array _________________
 * Size of array is 2.
 * intArray[0] = 1 , intArray[1] = 2.
 * size of int array = 4 byte * 2 (size) = 8 byte.
 *
 * _________________ Double Array _________________
 * Size of array is 3.
 * floatArray[0] = 1.000000 , floatArray[1] = 2.000000 , floatArray[2] = 3.000000.
 * size of double array = 8 byte * 3 (size) = 24 byte.
 * */