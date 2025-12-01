/*
Q97 (Strings)
Print the initials of a name.

Show Sample Test Cases
Input 1:
John Doe
Output 1:
J.D.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    // Print first character as initial
    if (name[0] != ' ')
        printf("%c.", name[0]);

    // Look for space and print next character
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}
