/*
Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.

Show Sample Test Cases
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5
Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/

#include <stdio.h>

int main()
{
    float p, r, t;
    float si, ci;
    float amount = 1;
    int i;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    amount = p;
    for (i = 1; i <= t; i++)
    {
        amount = amount * (1 + r / 100);
    }

    ci = amount - p;

    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", si, ci);

    return 0;
}
