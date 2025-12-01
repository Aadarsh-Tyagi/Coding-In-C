/*
Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius.

Show Sample Test Cases
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96
Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>

int main()
{
    float r;
    float area, circum;
    float pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = pi * r * r;
    circum = 2 * pi * r;

    printf("Area=%.2f, Circumference=%.2f\n", area, circum);

    return 0;
}
