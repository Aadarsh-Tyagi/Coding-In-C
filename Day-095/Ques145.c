/*
Q145 (Enum)
Return a structure containing top student's details from a function.

Show Sample Test Cases
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
Explanation 1:
The function returns the structure containing the highest scoring student's details.
*/

#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

// Function returning structure
struct Student findTopper(struct Student s[], int n)
{
    int i, topIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];
}

int main()
{
    int i;
    struct Student students[3];

    // Input: name roll marks for 3 students
    for (i = 0; i < 3; i++) {
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }

    struct Student topper = findTopper(students, 3);

    printf("Top Student: %s | Roll: %d | Marks: %.0f",
           topper.name, topper.roll, topper.marks);

    return 0;
}
