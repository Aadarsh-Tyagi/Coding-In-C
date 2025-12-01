/*
Q122 (File Handling)
Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

Show Sample Test Cases
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23
Explanation 1:
The program reads each line from info.txt using fgets() and prints it until EOF.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and print lines until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
