/*
Q123 (File Handling)
Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Show Sample Test Cases
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
Explanation 1:
The file has 31 characters including spaces and newlines, 5 words, and 2 lines.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");
    
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;  // count characters
        
        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Check for word boundaries
        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;   // new word starts
        }
    }

    // If file isn't empty and doesn't end with newline, last line counted
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
