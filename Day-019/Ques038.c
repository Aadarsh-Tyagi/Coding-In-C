/*
Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number.

Show Sample Test Cases
Input 1:
123
Output 1:
6
Input 2:
999
Output 2:
27
*/

#include <stdio.h>

int main() {
    int n, sum = 0, digit;
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;   // Get last digit
        sum += digit;     // Add to sum
        n = n / 10;       // Remove last digit
    }

    printf("%d", sum);

    return 0;
}
