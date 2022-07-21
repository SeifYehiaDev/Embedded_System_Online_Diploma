/*
 * 13_UpperAndLower.c
 *
 * Created on : 21/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <string.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 31
 * Changing String Case
 * this code explain how to convert uppercase to lower case and lower to upper
 * */
void main() {
    char upperName[] = "SEIF", lowerName[] = "yehia";
    printf("Upper name is : \"%s\"", upperName);
    strlwr(upperName);
    printf(" after convert to lower name is : \"%s\"\n", upperName);
    printf("Lower name is : \"%s\"", lowerName);
    strupr(lowerName);
    printf(" after convert to upper name is : \"%s\"\n", lowerName);
}
/*                                                 _Output_
 * Upper name is : "SEIF" after convert to lower name is : "seif"
 * Lower name is : "yehia" after convert to upper name is : "YEHIA"
 * */