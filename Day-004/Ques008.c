/*
Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers.

Show Sample Test Cases
Input 1:
5
Output 1:
Sum=15
Input 2:
10
Output 2:
Sum=55
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum=%d\n", sum);

    return 0;
}
