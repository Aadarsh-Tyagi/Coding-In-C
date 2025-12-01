/*
Q93 (Strings)
Check if two strings are anagrams of each other.

Show Sample Test Cases
Input 1:
listen
silent
Output 1:
Anagrams
Input 2:
hello
world
Output 2:
Not anagrams
*/

#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int count1[26] = {0}, count2[26] = {0};
    int i;

    scanf("%s", str1);
    scanf("%s", str2);

    // Frequency count for first string
    for (i = 0; str1[i] != '\0'; i++) {
        count1[str1[i] - 'a']++;
    }

    // Frequency count for second string
    for (i = 0; str2[i] != '\0'; i++) {
        count2[str2[i] - 'a']++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
