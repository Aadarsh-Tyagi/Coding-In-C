/*
Q143 (Enum)
Find and print the student with the highest marks.

Show Sample Test Cases
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
Explanation 1:
Program compares marks of all students and prints the one with the highest.
*/

#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main()
{
    int n, i, topperIndex = 0;
    scanf("%d", &n); // number of students

    struct Student s[n];

    for(i = 0; i < n; i++)
    {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[topperIndex].marks)
            topperIndex = i;
    }

    printf("Topper: %s (Marks: %.0f)", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
