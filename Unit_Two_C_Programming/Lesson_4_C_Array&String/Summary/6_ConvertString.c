/*
 * 6_ConvertString.c
 *
 * Created on : 21/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>
#include <string.h>

/*                                      String
 * Convert uppercase string to lowercase string and lowercase to uppercase ,without using strlwr() & strupr()
 * */
void main() {
    int index;
    char name[] = "SeIf YeHia EsMaiL ABDEl AaL";
    printf("\n_____________________________ The original name is _____________________________\n");
    printf("%s\n", name);
    printf("_____________________________ After Convert to upper _____________________________\n");
    for (index = 0; name[index] != 0; index++)
        if (name[index] >= 'a' && name[index] <= 'z') // Small letter
            name[index] -= ('a' - 'A');
    printf("%s\n", name);
    printf("_____________________________ After Convert to lower _____________________________\n");
    for (index = 0; name[index] != 0; index++)
        if (name[index] >= 'A' && name[index] <= 'Z') // Capital letter
            name[index] += ('a' - 'A');
    printf("%s\n", name);


}
/*                                                 _Output_
 * _____________________________ The original name is _____________________________
 * SeIf YeHia EsMaiL ABDEl AaL
 * _____________________________ After Convert to upper _____________________________
 * SEIF YEHIA ESMAIL ABDEL AAL
 * _____________________________ After Convert to lower _____________________________
 * seif yehia esmail abdel aal
 * */
