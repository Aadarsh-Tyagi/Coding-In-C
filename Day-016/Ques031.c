/*
Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation.

Show Sample Test Cases
Input 1:
10
Output 1:
1010
Input 2:
7
Output 2:
111
*/

#include <stdio.h>

int main() {
    int num, temp, rem;
    long long binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Convert decimal to reversed binary number
    while (temp > 0) {
        rem = temp % 2;
        binary = binary + rem * place;
        place = place * 10;
        temp = temp / 2;
    }

    printf("%lld", binary);

    return 0;
}
