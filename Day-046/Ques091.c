/*
Q91 (Strings)
Remove all vowels from a string.

Show Sample Test Cases
Input 1:
education
Output 1:
dctn
*/

#include <stdio.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {

            result[j++] = str[i];
        }
    }

    result[j] = '\0';
    printf("%s", result);

    return 0;
}
