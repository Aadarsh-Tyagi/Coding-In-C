/*
Q83 (Strings)
Count vowels and consonants in a string.

Show Sample Test Cases
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    fgets(str, sizeof(str), stdin);  // read string including spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        // check vowels (both uppercase and lowercase)
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            vowels++;
        }
        // check consonants
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
