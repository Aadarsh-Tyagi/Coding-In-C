/*
Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number.

Show Sample Test Cases
Input 1:
12345
Output 1:
15 (1*3*5)
Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;  // default product

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;     // extract last digit
        if (digit % 2 != 0) // check odd
            product *= digit;
        n = n / 10;         // remove last digit
    }

    printf("%d", product);

    return 0;
}
