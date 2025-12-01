/*
Q138 (Enum)
Print all enum names and integer values using a loop.

Show Sample Test Cases
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
Explanation 1:
Iterating through enum values prints each constant with its assigned integer.
*/

#include <stdio.h>

int main()
{
    enum Signal { RED, YELLOW, GREEN };
    enum Signal s;

    for (s = RED; s <= GREEN; s++)
    {
        switch (s)
        {
            case RED:
                printf("RED=%d\n", s);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", s);
                break;
            case GREEN:
                printf("GREEN=%d\n", s);
                break;
        }
    }

    return 0;
}
