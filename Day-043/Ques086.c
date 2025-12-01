/*
Q86 (Strings)
Check if a string is a palindrome.

Show Sample Test Cases
Input 1:
madam
Output 1:
Palindrome
Input 2:
hello
Output 2:
Not palindrome
*/

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 1;

    // Read string
    scanf("%s", str);

    // Find length
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
