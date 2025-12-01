/*
Q30 (Loops without Arrays/Strings)
Write a program to reverse a given number.

Show Sample Test Cases
Input 1:
1234
Output 1:
4321
Input 2:
100
Output 2:
1
*/

#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        rem = num % 10;       // get last digit
        rev = rev * 10 + rem; // build reverse
        num = num / 10;       // remove last digit
    }

    printf("%d", rev);

    return 0;
}
