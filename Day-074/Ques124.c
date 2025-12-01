/*
Q124 (File Handling)
Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Show Sample Test Cases
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
Explanation 1:
Expected File (destination.txt): Learning C File Handling
*/

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[50], destFile[50];
    int ch;

    // Take filenames from user
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy content using fgetc() and fputc()
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully to %s\n", destFile);

    // Close files
    fclose(src);
    fclose(dest);

    return 0;
}
