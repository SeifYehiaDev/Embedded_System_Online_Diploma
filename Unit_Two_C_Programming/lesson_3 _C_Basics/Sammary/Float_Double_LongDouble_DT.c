#include <stdio.h>
#include <limits.h>
#include <math.h>

void main() {
    float firstNumber = 3.1415926535897932; // %f
    double secondNumber = 3.1415926535897931; // %f
    long double thirdNumber = 3.141592653589793213359; // %lf
    printf("\n_______________________ Size of float & double & long double _______________________\n");
    printf("The size of \"float\" is : %d bytes = %d bits\n", sizeof(float),
           sizeof(float) * 8);  // 4 bytes = 32 bits.
    printf("The size of \"double\" is : %d bytes = %d bits\n", sizeof(double),
           sizeof(double) * 8); // 8 bytes = 64 bits.
    printf("The size of \"long double\" is : %d bytes = %d bits\n", sizeof(long double),
           sizeof(long double) * 8); // 16 bytes = 128 bits. =====> depend on compiler c99. but in c89 is 10 bytes.
    printf("\n_______________________ print float & double & long double _______________________\n");
    printf("%f\n", firstNumber); // 3.141593
    printf("%.2f\n", firstNumber); // 3.14
    printf("%.16f\n", secondNumber); // 3.1415927410125731
    printf("%.22lf\n", thirdNumber); // 0.0000000000000000000000 why ?
    printf("\n_______________________ float & int Divided _______________________\n");
    int variableOne = 4 / 9;
    printf("4 / 9 = %d\n", variableOne);  // ======>  4 / 9 = 0
    float variableTwo = 4 / 9;
    printf("4 / 9 = %.2f\n", variableTwo);// ======>  4 / 9 = 0.00
    float variableThree = 4.0 / 9.0;
    printf("4.0 / 9.0 = %.2f\n", variableThree);// ======>  4.0 / 9.0 = 0.44
}
