/*
Q134 (Enum)
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Show Sample Test Cases
Input 1:
FAILURE
Output 1:
Operation failed
Explanation 1:
FAILURE corresponds to a failed operation message.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status s;
    char input[10];

    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0) s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) s = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) s = TIMEOUT;
    else {
        printf("Invalid Input\n");
        return 0;
    }

    switch (s)
    {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
