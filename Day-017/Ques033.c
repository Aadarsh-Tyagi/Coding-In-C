/*
Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.

Show Sample Test Cases
Input 1:
153
Output 1:
Armstrong
Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>

int main() {
    int num, temp, rem;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem); // cube of digit
        temp = temp / 10;
    }

    if (sum == num)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
