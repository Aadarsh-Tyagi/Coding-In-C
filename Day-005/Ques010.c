/*
Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Show Sample Test Cases
Input 1:
3661
Output 1:
1:1:1
Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>

int main()
{
    int total, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total);

    hours = total / 3600;
    total = total % 3600;

    minutes = total / 60;
    seconds = total % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
