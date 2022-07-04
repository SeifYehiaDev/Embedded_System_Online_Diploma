#include <stdio.h>
#include <limits.h>

void main() {
    int remainder =  1 % 8 ;
    printf("1 % 8 = %d\n",remainder);
    remainder = 8 % 8 ;
    printf("8 % 8 = %d\n",remainder);
    remainder = 9 % 8 ;
    printf("9 % 8 = %d\n",remainder);
}
