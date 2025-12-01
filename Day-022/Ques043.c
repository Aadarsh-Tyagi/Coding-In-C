/*
Q43 (Loops without Arrays/Strings)
Write a program to check if a number is a strong number.

Show Sample Test Cases
Input 1:
145
Output 1:
Strong number
Input 2:
123
Output 2:
Not strong number
*/

#include <stdio.h>

int main() {
    int n, temp, digit;
    long long sum = 0, fact;
    
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;

        // calculate factorial of digit
        fact = 1;
        for (int i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
