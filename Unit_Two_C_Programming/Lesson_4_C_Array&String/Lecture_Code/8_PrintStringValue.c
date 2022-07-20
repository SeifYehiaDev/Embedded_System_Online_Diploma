/*
 * 8_PrintStringValue.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 20 and 23
 * String
 * Print corrupted data and Print normal data
 * */
void main() {
    printf("\n________________________ Print corrupted data________________________\n");
    char messageOne[] = {'H', 'e', 'l', 'l', 'o'};
    printf("message = %s\n", messageOne);
    char messageTwo[5] = {'H', 'e', 'l', 'l', 'o'}; // if size <= 5 -------> Print corrupted data
    printf("message = %s\n", messageTwo);
    char messageTw0[5] = {'H', 'e', 'l', 'l', 'o',0}; // if size <= 5 -------> Print corrupted data
    printf("message = %s\n", messageTw0);
    printf("________________________ Print normal data ________________________\n");
    char messageThree[] = {'H', 'e', 'l', 'l', 'o',0};
    printf("message = %s\n", messageThree);
    char messageFour[6] = {'H', 'e', 'l', 'l', 'o',0}; // size <= 5 , 5<=5 , but 0 at end
    printf("message = %s\n", messageFour);
    char messageFive[6] = {'H', 'e', 'l', 'l', 'o'}; // if size > 5 -------> Print normal data
    printf("message = %s\n", messageFive);
}
/*                                                 _Output_
 * ________________________ Print corrupted data________________________
 * message = Hello@ⁿ┐≡▬
 * message = HelloHello@ⁿ┐≡▬
 * message = HelloHello@ⁿ┐≡▬
 * ________________________ Print normal data ________________________
 * message = Hello
 * message = Hello
 * message = Hello
 * */