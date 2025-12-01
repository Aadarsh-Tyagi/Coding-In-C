/*
Q88 (Strings)
Replace spaces with hyphens in a string.

Show Sample Test Cases
Input 1:
hello world
Output 1:
hello-world
*/

#include <stdio.h>

int main() {
    char str[200];
    int i;

    // Read string with spaces
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("%s", str);

    return 0;
}
