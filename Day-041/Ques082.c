/*
Q82 (Strings)
Print each character of a string on a new line.

Show Sample Test Cases
Input 1:
Hi
Output 1:
H
i
*/

#include <stdio.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);  // read the string

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')          // ignore newline from input
            printf("%c\n", str[i]);
    }

    return 0;
}
