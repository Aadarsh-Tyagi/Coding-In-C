/*
Q130 (File Handling)
Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Show Sample Test Cases
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
Explanation 1:
Expected File Content (students.txt): Asha 101 85\nRavi 102 92
*/

#include <stdio.h>

int main() {
    FILE *file;
    int n, roll, marks;
    char name[50];

    // Write to file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error while creating file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter Name, Roll, Marks: ");
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(file, "%s %d %d\n", name, roll, marks);
    }

    fclose(file);

    // Read from file
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error while opening file!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(file);

    return 0;
}
