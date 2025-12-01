/*
Q29 (Loops without Arrays/Strings)
Write a program to calculate the factorial of a number.

Show Sample Test Cases
Input 1:
5
Output 1:
120
Input 2:
3
Output 2:
6
*/

#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("%lld", fact);

    return 0;
}
