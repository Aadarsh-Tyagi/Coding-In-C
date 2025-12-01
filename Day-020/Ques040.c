/*
Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it.

Show Sample Test Cases
Input 1:
1010
Output 1:
0101
Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>

int main() {
    long long n, digit, result = 0, place = 1;

    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;        // extract last bit

        if (digit == 1)
            result += 0 * place;
        else
            result += 1 * place;

        place *= 10;           // move to next position
        n /= 10;               // remove last bit
    }

    printf("%lld", result);

    return 0;
}
