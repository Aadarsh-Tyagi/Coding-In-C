/*
Q52 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Show Sample Test Cases
Input 1:
Output 1:
Pattern with stars spaced irregularly as shown.
*/

#include <stdio.h>

int main() {
    int i, j;

    // First block - 1 star
    for (j = 0; j < 1; j++) {
        printf("*\n");
    }
    printf("\n");

    // Second block - 3 stars
    for (j = 0; j < 3; j++) {
        printf("*\n");
    }
    printf("\n");

    // Third block - 5 stars
    for (j = 0; j < 5; j++) {
        printf("*\n");
    }
    printf("\n");

    // Fourth block - 3 stars
    for (j = 0; j < 3; j++) {
        printf("*\n");
    }
    printf("\n");

    // Fifth block - 1 star
    printf("*");

    return 0;
}
