/*
 * 3_AddressOfArray.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                                      Address of array
 * Address of array
 * this code explain how concept of address in array
 * */
void main() {
    int intOfArray[] = {1, 2, 3, 4};
    printf("\nAddress of array is :\n");
    printf("intOfArray     = %d\n", intOfArray);
    printf("&intOfArray    = %d\n", &intOfArray);
    printf("&intOfArray[0] = %d\n", &intOfArray[0]);
    printf("_________________________________________________\n");
    printf("Address of intOfArray[0] = %x & Address of intOfArray[1] = %x\n", &intOfArray[0], &intOfArray[1]);
    /* &intOfArray[0] = 39fff900
     * &intOfArray[1] = 39fff900 + 4 byte = 39fff904
     * &intOfArray[2] = 39fff904 + 4 byte = 39fff908
     * */
}
/*                                                 _Output_
 * Address of array is :
 * intOfArray     = 973076736
 * &intOfArray    = 973076736
 * &intOfArray[0] = 973076736
 * _________________________________________________
 * Address of intOfArray[0] = 39fff900 & Address of intOfArray[1] = 39fff904
 * */
