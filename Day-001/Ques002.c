/*
Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.

Show Sample Test Cases
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5
Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

#include <stdio.h>

int main()
{
    int a, b;
    int sum, diff, prod, quot;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;

    if (b == 0)
    {
        printf("Division not possible (cannot divide by zero)\n");
        return 0;
    }

    quot = a / b;

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quot);

    return 0;
}
