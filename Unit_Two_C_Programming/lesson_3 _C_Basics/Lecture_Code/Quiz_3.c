/*
 * Quiz_3.c
 *
 * Created on : 7/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 * */

#include <stdio.h>

void main() {
    printf("A\r\nB\r\nC");
    /*
     * A
     * B
     * C
     * */
    printf("\n**************************************************\n");
    printf("A\tB\tC\r\n");
    printf("D\tE\tF\r\n");
    printf("N\tO\tP\r\n");
    /*
     * A    B   C
     * D    E   F
     * N    O   P
     * */
    printf("**************************************************\n");
    printf("A\\B\\C .");
    /*
     * A\B\C .
     * */
    printf("\n**************************************************\n");
    printf("Say \"Hello\"");
    //Say "Hello"
    printf("\n**************************************************\n");
    int area = 20 * 30;
    printf("Area is %d m^2", area);
    //Area is 600 m^2
    printf("\n**************************************************\n");
    printf("If the width is %d and the height is %d then the area is %d m^2", 20, 30, 20 * 30);
    //If the width is 20 and the height is 30 then the area is 600 m^2
    printf("\n**************************************************\n");
    int width, height;
    printf("Please Enter The Width and Height\n");
    fflush(stdout);
    scanf("%d%d", &width, &height);
    printf("\r\nArea is %d", width * height);
    /*
     * Please Enter The Width and Height
     * 30
     * 50
     *
     * Area is 1500
     * */
    printf("\n**************************************************\n");
    int x = 172;
    printf("X equals %x", x); // ======= > print Hexadecimal in small later(%x).
    //X equals ac
    printf("\n**************************************************\n");
    int X = 172;
    printf("X equals %X", X); // ======= > print Hexadecimal in Capital later(%X).
    //X equals AC
    printf("\n**************************************************\n");
    printf("Enter X in hexadecimal format:");
    fflush(stdout);
    scanf("%X", &X);
    printf("\r\nX equals %d", X);
    /*
     *Enter X in hexadecimal format:DE
     *
     *X equals 222
     * */
    printf("\n**************************************************\n");
    float R = 2.5;
    printf("R equals %f", R);
    //R equals 2.500000
    printf("\n**************************************************\n");
    X = 6235;
    printf("X equals %10d", X);   // ====== > 10 - 4 digit = 6 space + 6235.
    //X equals       6235
    printf("\n**************************************************\n");
    R = 8372.5675365;
    printf("R equals %10.2f", R); // ====== > 10 - 7 digit = 3 space + 8372.57.
    //R equals    8372.57
    printf("\n**************************************************\n");
    X = 15;
    printf("X equals %05d", X); // make the number is 5 digit put zero @ left.
    //X equals 00015
}
