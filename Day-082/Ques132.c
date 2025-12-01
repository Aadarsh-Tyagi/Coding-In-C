/*
Q132 (Enum)
Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Show Sample Test Cases
Input 1:
GREEN
Output 1:
Go
Explanation 1:
When the enum value is GREEN, the program prints 'Go'.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    enum Signal { RED, YELLOW, GREEN };
    enum Signal light;
    char input[10];

    scanf("%s", input);

    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid Signal");
        return 0;
    }

    switch (light)
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
