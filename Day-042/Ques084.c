/*
Q84 (Strings)
Convert a lowercase string to uppercase without using built-in functions.

Show Sample Test Cases
Input 1:
hello
Output 1:
HELLO
*/

#include <stdio.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin); // Read input string

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {   // check lowercase
            str[i] = str[i] - 32;              // convert to uppercase
        }
    }

    printf("%s", str);

    return 0;
}
