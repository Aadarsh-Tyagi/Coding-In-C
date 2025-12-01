/*
Q85 (Strings)
Reverse a string.

Show Sample Test Cases
Input 1:
abcd
Output 1:
dcba
*/

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    // Read string
    scanf("%s", str);

    // Find length manually
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Print reverse
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
