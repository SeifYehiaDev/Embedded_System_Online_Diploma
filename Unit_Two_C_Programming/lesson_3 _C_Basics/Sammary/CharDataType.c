#include <stdio.h>
#include <limits.h>

void main() {
    printf("\n_____________________ Char using as char _____________________\n");
    char s = 83, e = 69, i = 73, f = 70; // ASCII CODE
    printf("print my name using ASCII code by Decimal : %c%c%c%c\n", s, e, i, f);
    s = 'S', e = 'E', i = 'I', f = 'F';
    printf("*******************     At The Same     *******************\n");
    printf("print my name using char : %c%c%c%c\n", s, e, i, f);
    printf("_____________________ Char using as integer _____________________\n");
    printf("___________________ Unsigned char ___________________ \n");
    unsigned char minUnsignedChar = 0, maxUnsignedChar = UCHAR_MAX;
    printf("The size of \"unsigned char\" is : %u bytes = %u bits, ======> Depend on Compiler.\n", sizeof(unsigned char),
           sizeof(unsigned char) * 8);
    printf("The range of \"unsigned char\" is from %u to %u\n ", minUnsignedChar, maxUnsignedChar);
    printf("___________________ Signed char ___________________ \n");
    char minChar = CHAR_MIN, maxChar = CHAR_MAX;
    printf("The size of \"char\" is : %d bytes = %d bits, ======> Depend on Compiler.\n", sizeof(char),
           sizeof(char) * 8);
    printf("The range of \"char\" is from : %d to %d\n ", minChar, maxChar);
}
