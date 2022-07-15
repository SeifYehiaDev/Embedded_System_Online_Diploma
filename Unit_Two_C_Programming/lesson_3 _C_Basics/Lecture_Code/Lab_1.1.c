/*
 * Lab_1.1.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 * 
 * */

#include <stdio.h>
#include <math.h>

void main() {
    /*                                          Question in unite two in lecture 3 page 96 .
     * In this program the user has to choose between calculating circle area or circle
     * circumference. The choice comes by taking a character from the keyboard using the (getche)
     * function. If the user presses „a‟ character it proceeds with area calculation and printing. If the
     * user presses „c‟ character it proceeds with circumference calculation and printing. If the user
     * presses other letters the program prints an error message.
     * */
    //                                                 _Solution_
    const float PI = M_PI; // constant variable can not Change :')
    float area, circumference, radiusFromUser; // Declare 3 float in line :')
    char userChoice; // this variable used to store user choice.
    printf("Please enter circle radius >>\n");
    fflush(stdout);
    scanf("%f", &radiusFromUser);
    if (radiusFromUser >= 0) { // to make sure the radius is positive number.
        printf("Please select one option\na || A ===> to print the area.\nc || C ===> to print the circumference.\nEnter your choice >>\n");
        fflush(stdin);
        fflush(stdout);
        scanf("%c", &userChoice);
        printf("Loading............\nThe radius is %f\nYour choice %c\n", radiusFromUser, userChoice);
        switch (userChoice) {
            case 'a':
            case 'A':
                area = PI * pow(radiusFromUser, 2.0);
                printf("The area is %f\n", area);
                break;
            case 'c':
            case 'C':
                circumference = 2 * PI * radiusFromUser;
                printf("The circumference is %f\n", circumference);
                break;
            default:
                printf("Your choice isn't available in menu.");
        }
    } else // if the radius is negative number (-ve)
        printf("The radius enter : %f\nSorry this radius is negative number please try again.\n", radiusFromUser);
}
//                                                 _Normal output Case one_
// in case one ---------------> to calculate area.
/*Please enter circle radius >>
 *3
 *Please select one option
 *a || A ===> to print the area.
 *c || C ===> to print the circumference.
 *Enter your choice >>
 *A
 *Loading............
 *The radius is 3.000000
 *Your choice A
 *The area is 28.274334
 * */


//                                                 _Normal output Case two_
// in case two ---------------> to calculate circumference.
/*Please enter circle radius >>
 *3
 *Please select one option
 *a || A ===> to print the area
 *c || C ===> to print the circumference
 *Enter your choice >>
 *c
 *Loading............
 *The radius is 3.000000
 *Your choice c
 *The circumference is 18.849556
 * */


//                                                 _invalid choice_
/*Please enter circle radius >>
 *3
 *Please select one option
 *a || A ===> to print the area
 *c || C ===> to print the circumference
 *Enter your choice >>
 *S
 *Loading............
 *The radius is 3.000000
 *Your choice S
 *Your choice isn't available in menu.
 * */

//                                                 _invalid radius_
/*Please enter circle radius >>
 *-3
 *The radius enter : -3.000000
 *Sorry this radius is negative number please try again.
 * */
