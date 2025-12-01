/*
Q89 (Strings)
Count frequency of a given character in a string.

Show Sample Test Cases
Input 1:
programming
g
Output 1:
2
*/

#include <stdio.h>

int main() {
    char str[200], ch;
    int i, count = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Read the character to search
    scanf("%c", &ch);

    // Count occurrences
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
