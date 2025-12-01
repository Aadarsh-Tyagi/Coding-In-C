/*
Q87 (Strings)
Count spaces, digits, and special characters in a string.

Show Sample Test Cases
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/

#include <stdio.h>

int main() {
    char str[200];
    int i;
    int spaces = 0, digits = 0, special = 0;

    // Read string including spaces
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i] >= 'a' && str[i] <= 'z'))
            continue; // letters ignored
        else
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}
