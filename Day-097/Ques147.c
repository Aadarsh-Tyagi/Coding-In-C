/*
Q147 (Enum)
Store employee data in a binary file using fwrite() and read using fread().

Show Sample Test Cases
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
Explanation 1:
Demonstrates writing and reading structures using binary file handling functions.
*/

#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    struct Employee empWrite, empRead;
    FILE *fp;

    // Input employee details
    scanf("%s %d %f", empWrite.name, &empWrite.id, &empWrite.salary);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
    fwrite(&empWrite, sizeof(empWrite), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
    fread(&empRead, sizeof(empRead), 1, fp);
    fclose(fp);

    // Output read data
    printf("Name: %s | ID: %d | Salary: %.2f", empRead.name, empRead.id, empRead.salary);

    return 0;
}
