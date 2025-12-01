/*
Q94 (Strings)
Find the longest word in a sentence.

Show Sample Test Cases
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    char word[100], longest[100] = "";
    int i = 0, j = 0;

    // Read entire line including spaces
    fgets(str, sizeof(str), stdin);

    while (1) {
        // Extract each word
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            // Compare lengths
            if (strlen(word) > strlen(longest)) {
                strcpy(longest, word);
            }

            j = 0; // reset for next word
            if (str[i] == '\0')
                break;
        }
        i++;
    }

    printf("%s", longest);

    return 0;
}
