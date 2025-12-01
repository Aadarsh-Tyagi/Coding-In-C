/*
Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.

Show Sample Test Cases
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, num, first, last, digits = 0, temp, middle, result;

    scanf("%d", &n);

    num = n;
    last = num % 10;             // last digit

    while (num >= 10) {          // find first digit & count digits
        num /= 10;
        digits++;
    }
    first = num;
    digits++;                    // total digits count

    // remove first and last digit
    temp = n % (int)pow(10, digits - 1);  // remove first digit part
    middle = temp / 10;                  // remove last digit

    // construct new number
    result = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("%d", result);

    return 0;
}
