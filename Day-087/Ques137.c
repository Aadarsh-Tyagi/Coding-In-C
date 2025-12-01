/*
Q137 (Enum)
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Show Sample Test Cases
Input 1:
GUEST
Output 1:
Welcome Guest!
Explanation 1:
Enum value determines which message is displayed.
*/

#include <stdio.h>

int main()
{
    enum Role { ADMIN = 1, USER, GUEST };
    enum Role role;

    // Ask user to enter role number
    printf("Enter role (1-ADMIN, 2-USER, 3-GUEST): ");
    scanf("%d", &role);

    switch(role)
    {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid role!\n");
    }

    return 0;
}
