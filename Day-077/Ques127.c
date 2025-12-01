/*
Q127 (File Handling)
Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Show Sample Test Cases
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
Explanation 1:
All lowercase letters in input.txt are converted to uppercase using character manipulation before writing to output.txt.
*/

#include <stdio.h>
#include <ctype.h>   // for toupper()

int main() {
    FILE *input, *output;
    char ch;

    // Open input file in read mode
    input = fopen("input.txt", "r");

    if (input == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Open output file in write mode
    output = fopen("output.txt", "w");

    // Read characters one by one and convert to uppercase
    while ((ch = fgetc(input)) != EOF) {
        ch = toupper(ch);     // convert to uppercase
        fputc(ch, output);    // write to output file
    }

    fclose(input);
    fclose(output);

    printf("File converted successfully! Check output.txt\n");

    return 0;
}
