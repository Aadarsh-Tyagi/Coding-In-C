/*
Q136 (Enum)
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Show Sample Test Cases
Input 1:
ADD 10 20
Output 1:
30
Explanation 1:
The enum ADD triggers addition of 10 and 20.
*/

#include <stdio.h>

int main()
{
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
    enum Menu choice;
    int a, b;

    // Example input: ADD 10 20
    // To simulate, ask user for choice
    printf("Enter choice (1-ADD, 2-SUBTRACT, 3-MULTIPLY): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
