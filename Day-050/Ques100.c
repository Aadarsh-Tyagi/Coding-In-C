/*
Q100 (Strings)
Print all sub-strings of a string.

Show Sample Test Cases
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int n = strlen(str);
    int first = 1;  // For formatting commas

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (!first) {
                printf(",");
            }
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }

    return 0;
}
