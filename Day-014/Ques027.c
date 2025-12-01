/*
Q27 (Loops without Arrays/Strings)
Write a program to print the sum of the first n odd numbers.

Show Sample Test Cases
Input 1:
3
Output 1:
9
Input 2:
5
Output 2:
25
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int odd = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + odd;
        odd = odd + 2;
    }

    printf("%d", sum);

    return 0;
}
