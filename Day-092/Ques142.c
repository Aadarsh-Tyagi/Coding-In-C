/*
Q142 (Enum)
Store details of 5 students in an array of structures and print all.

Show Sample Test Cases
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
Explanation 1:
The array of structures stores multiple student records and displays them in a table.
*/

#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for(i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
