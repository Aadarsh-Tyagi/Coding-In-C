/*
Q125 (File Handling)
Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

Show Sample Test Cases
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
Explanation 1:
Output File (data.txt after execution): Hello world\nThis is appended text.
*/

#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char text[200];

    // Take file name from user
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Clear input buffer and take new line input
    getchar(); // to consume newline left by scanf
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append to file
    fputs(text, file);

    printf("File updated successfully with appended text.\n");

    // Close file
    fclose(file);

    return 0;
}
