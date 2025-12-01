/*
Q114 (Logic Enhancers)
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Show Sample Test Cases
Input 1:
s = "abcabcbb"
Output 1:
3
Explanation 1:
The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
Input 2:
s = "bbbbb"
Output 2:
1
Explanation 2:
The answer is "b", with the length of 1.
Input 3:
s = "pwwkew"
Output 3:
3
Explanation 3:
The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin) == NULL) return 0;

    // remove trailing newline if present
    int len = strlen(s);
    if (len > 0 && s[len-1] == '\n') {
        s[len-1] = '\0';
        len--;
    }

    // remove surrounding quotes if user typed "abc" (optional)
    if (len >= 2 && ((s[0] == '"' && s[len-1] == '"') || (s[0] == '\'' && s[len-1] == '\''))) {
        // shift left by 1 and shorten
        memmove(s, s+1, len-2);
        s[len-2] = '\0';
        len -= 2;
    }

    // last index seen for each possible char (initialize to -1)
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int maxLen = 0;
    int start = 0; // window start index

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) {
            // character repeated inside current window, move start
            start = last[c] + 1;
        }
        last[c] = i; // update last seen index
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d", maxLen);
    return 0;
}
