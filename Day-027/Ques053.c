/*
Q53 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Show Sample Test Cases
Input 1:
Output 1:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int i, j;

    // Upper part (increasing)
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part (decreasing)
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
