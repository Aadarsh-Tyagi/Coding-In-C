/*
Q98 (Strings)
Print initials of a name with the surname displayed in full.

Show Sample Test Cases
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len, lastSpace = -1;

    fgets(name, sizeof(name), stdin);
    len = strlen(name);

    // Find last space index
    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print initials (before last word)
    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c.", name[i + 1]);
    }

    // Print surname fully
    printf(" %s", &name[lastSpace + 1]);

    return 0;
}
