/*
Q126 (File Handling)
Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

Show Sample Test Cases
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)
Explanation 1:
The program opens the existing file and prints its content using fgets().
Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!
Explanation 2:
Since fopen() returns NULL, an error message is displayed instead of reading.
*/

#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char line[200];

    // Take filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    printf("\n--- File Content ---\n");

    // Read file line by line
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close file
    fclose(file);

    return 0;
}
