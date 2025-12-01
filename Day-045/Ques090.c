/*
Q90 (Strings)
Toggle case of each character in a string.

Show Sample Test Cases
Input 1:
Hello
Output 1:
hELLO
*/

#include <stdio.h>

int main() {
    char str[200];
    int i;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Toggle case
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // convert to lowercase
        }
    }

    printf("%s", str);

    return 0;
}
