/*
Q50 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*****
 ****
  ***
   **
    * 
      
Show Sample Test Cases
Input 1:
Output 1:
*****
 ****
  ***
   **
    *
Input 2:
Output 2:
Note: Spaces indicate indentation.
*/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {         // Loop for rows
        for (j = 0; j < i; j++) {     // Print spaces before stars
            printf(" ");
        }
        for (j = 0; j < 5 - i; j++) { // Print stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
