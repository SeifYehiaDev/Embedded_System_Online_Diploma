/*
 * 1_DataConversionAndCasting.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 2
 * Data Conversion and type Casting
 * this code explain what is the different between Implicit and Explict and when use casting data type
 * */
void main() {
    float floatNumber = 1.2;
    int intNumberOne = 5, intNumberTwo;
    int intHexadecimalNumber = 0x878925;
    char charNumberOne, charNumberTwo;
    intNumberTwo = floatNumber;           // ===> int  = float ===> explicit Conversion , float > int  , Warming because don't use casting
    charNumberOne = intNumberOne;         // ===> char = int   ===> explicit Conversion , int   > char , Warming because don't use casting
    charNumberTwo = intHexadecimalNumber; // ===> char = int   ===> explicit Conversion , int   > char , Warming because don't use casting
    /*
     * intNumberTwo  = 1
     * charNumberOne = 5
     * charNumberTwo = 25(Hexadecimal) = 37(Decimal) ===> character is 1 byte it will be take last byte at right = 25
     * charNumberTwo = 37
     * */
    printf("intNumberTwo = %d\ncharNumberOne = %d\ncharNumberTwo = %d\n", intNumberTwo, charNumberOne, charNumberTwo);
    printf("________________________________ After Casting The Same Result ______________________________\n");
    intNumberTwo = (int) floatNumber;
    charNumberOne = (char) intNumberOne;
    charNumberTwo = (char) intHexadecimalNumber;
    printf("intNumberTwo = %d\ncharNumberOne = %d\ncharNumberTwo = %d\n", intNumberTwo, charNumberOne, charNumberTwo);
}
/*                                                 _Output_
 * intNumberTwo = 1
 * charNumberOne = 5
 * charNumberTwo = 37
 * ________________________________ After Casting The Same Result ______________________________
 * intNumberTwo = 1
 * charNumberOne = 5
 * charNumberTwo = 37
 * */