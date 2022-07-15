/*
 * Lab_5.0.c
 *
 * Created on : 15/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

void main() {
    /*                                          Question in unite two in lecture 3 page 102 .
     *Calculate the average Students Degrees.
 * */
    //                                                 _Solution_
    const int NUMBER_OF_STUDENTS;
    int index;
    float average , degree , sumOfDegree = 0 ;
    printf("Enter the number of students >>\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &NUMBER_OF_STUDENTS);
    if (NUMBER_OF_STUDENTS > 0) {
        for (index = 0; index < NUMBER_OF_STUDENTS; index++) {
            printf("Enter Student (%d) degree >>\n", index + 1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f", &degree);
            sumOfDegree += degree;
        }
        average = sumOfDegree / NUMBER_OF_STUDENTS;
        printf("\nAverage students degree is : %f\n", average);
    } else
        printf("Invalid value , number of student should be positive number\n");
}

    /*                                                 _Output invalid value_
     *Enter the number of students >> -5
     * Invalid value , number of student should be positive number
     * */

    /*                                                 _Output normal Case_
     *Enter the number of students >> 7
     *7
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
     *
     *Average students degree is : 15.000000
     * */

