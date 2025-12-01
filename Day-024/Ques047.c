/*
Q47 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
**
***
****
*****

Show Sample Test Cases
Input 1:
Output 1:
*
**
***
****
*****
*/

#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {   // Loop for rows
        for(j = 1; j <= i; j++) {   // Loop for printing stars
            printf("*");
        }
        printf("\n");   // Move to next line
    }

    return 0;
}
