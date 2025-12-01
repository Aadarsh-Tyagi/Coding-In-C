/*
Q140 (Enum)
Define a struct with enum Gender and print person's gender.

Show Sample Test Cases
Input 1:
Gender=MALE
Output 1:
Male
Explanation 1:
The enum inside the struct allows representing gender as a named constant.
*/

#include <stdio.h>

int main()
{
    enum Gender { MALE, FEMALE, OTHER };

    struct Person {
        char name[20];
        enum Gender gender;
    };

    struct Person p;
    p.gender = MALE;   // sample input

    if (p.gender == MALE)
        printf("Male\n");
    else if (p.gender == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}
