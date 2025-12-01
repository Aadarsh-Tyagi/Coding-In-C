/*
Q81 (Strings)
Count characters in a string without using built-in length functions.

Show Sample Test Cases
Input 1:
Hello
Output 1:
5
Input 2:
 
Output 2:
1
*/

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    fgets(str, sizeof(str), stdin);  // read the string including spaces

    // Count characters manually
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')  // ignore newline from fgets
            count++;
    }

    printf("%d", count);

    return 0;
}
