/*
Q128 (File Handling)
Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Show Sample Test Cases
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
Explanation 1:
The program iterates through each character, counts vowels (A, E, I, O, U) and consonants, ignoring other symbols.
*/

#include <stdio.h>
#include <ctype.h>   // for tolower()

int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    file = fopen("text.txt", "r");   // open file in read mode

    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch);   // convert to lowercase for easier checking

        if (ch >= 'a' && ch <= 'z') {   // check if letter
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        // ignore digits and special characters
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
