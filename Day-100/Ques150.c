/*
Q150 (Enum)
Use pointer to struct to modify and display data using -> operator.

Show Sample Test Cases
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
Explanation 1:
Pointer to structure accesses and modifies data using the arrow (->) operator.
*/

#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s, *ptr;

    ptr = &s;  // Pointer pointing to structure

    // Modify structure members using pointer and -> operator
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
