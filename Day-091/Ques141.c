/*
Q141 (Enum)
Define a structure Student with name, roll_no, and marks, then read and print one student's data.

Show Sample Test Cases
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90
Explanation 1:
The program stores and displays one student's details using structure members.
*/

#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s;

    scanf("%s", s.name);
    scanf("%d", &s.roll_no);
    scanf("%f", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll_no, s.marks);

    return 0;
}
