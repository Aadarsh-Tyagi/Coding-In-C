/*
Q149 (Enum)
Use malloc() to allocate structure memory dynamically and print details.

Show Sample Test Cases
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88
Explanation 1:
Memory for structure is dynamically allocated on heap using malloc().
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    // Read data
    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    // Print data
    printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);

    free(s); // Free memory
    return 0;
}
