/*
 * 3_Lab_1.c
 *
 * Created on : 20/7/2022
 * Author : Seif Yehia Esmail Abdel Aal
 *
 * */

#include <stdio.h>

/*                             This code in unit.2 Lesson.4 C Array & String at page 7
 * lab 1 : Store and print 10 students degrees 
 * shows how to scan 10 students degree from user , stores them in a single area and then prints them.
 * */
//                                                 Solution
void main() {
    int index;
    const int SIZE_OF_FLOAT_ARRAY = 10, LENGTH_OF_ARRAY = SIZE_OF_FLOAT_ARRAY - 1;
    float floatDegreesArray[SIZE_OF_FLOAT_ARRAY];
    for (index = 0; index <= LENGTH_OF_ARRAY; index++) {
        printf("Enter student %d degree : ", index + 1);
        fflush(stdin);fflush(stdout);
        scanf("%f", &floatDegreesArray[index]);
    }
    printf("\nStudents Degrees are :\n");
    for (index = 0; index <= LENGTH_OF_ARRAY; index++)
        printf("Enter student %d degree is %f\n", index + 1, floatDegreesArray[index]);
}
/*                                                 _Output_
 * Enter student 1 degree : 1
 * Enter student 2 degree : 2
 * Enter student 3 degree : 3
 * Enter student 4 degree : 4
 * Enter student 5 degree : 5
 * Enter student 6 degree : 6
 * Enter student 7 degree : 7
 * Enter student 8 degree : 8
 * Enter student 9 degree : 9
 * Enter student 10 degree : 10
 *
 * Students Degrees are :
 * Enter student 1 degree is 1.000000
 * Enter student 2 degree is 2.000000
 * Enter student 3 degree is 3.000000
 * Enter student 4 degree is 4.000000
 * Enter student 5 degree is 5.000000
 * Enter student 6 degree is 6.000000
 * Enter student 7 degree is 7.000000
 * Enter student 8 degree is 8.000000
 * Enter student 9 degree is 9.000000
 * Enter student 10 degree is 10.000000
 * */
