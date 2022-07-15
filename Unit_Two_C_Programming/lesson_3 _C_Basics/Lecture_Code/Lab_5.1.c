/*
 * Lab_5.1.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

void main() {
    /*                                          Question in unite two in lecture 3 page 106 .
     *Calculate the average Students Degrees.
 * */
    //                                                 _Solution_
    int NUMBER_OF_STUDENTS = 0;
    float average, degree, sumOfDegree = 0;
    printf("\nEnter negative value to exist\n");
    while (1) {
        printf("Enter Student (%d) degree >>\n", NUMBER_OF_STUDENTS + 1);
        fflush(stdin);
        fflush(stdout);
        scanf("%f", &degree);
        if (degree < 0)
            break;
        sumOfDegree += degree;
        NUMBER_OF_STUDENTS++;
    }
    average = sumOfDegree / NUMBER_OF_STUDENTS;
    printf("\nAverage students degree is : %f\n", average);
}

    /*                                                 _Output_
     *Enter negative value to exist
     *Enter Student (1) degree >>
     *12
     *Enter Student (2) degree >>
     *13
     *Enter Student (3) degree >>
     *14
     *Enter Student (4) degree >>
     *15
     *Enter Student (5) degree >>
     *16
     *Enter Student (6) degree >>
     *17
     *Enter Student (7) degree >>
     *18
     *Enter Student (8) degree >>
     *-1
     *Average students degree is : 15.000000
     * */

