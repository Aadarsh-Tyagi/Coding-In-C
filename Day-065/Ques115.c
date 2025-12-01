/*
Q115 (Logic Enhancers)
Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Show Sample Test Cases
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram
Explanation 1:
The strings contain the same characters with the same frequencies.
Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram
Explanation 2:
The strings do not contain the same characters.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};

    // Input strings
    scanf("%s", s);
    scanf("%s", t);

    // If lengths differ, not anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    // Count frequency for string s
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Decrease frequency using string t
    for (int i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
