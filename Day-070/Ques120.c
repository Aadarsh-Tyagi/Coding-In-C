/*
Q120 (File Handling)
Write a program to take a string input. Change it to sentence case.

Show Sample Test Cases
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic
Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.
Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    
    // Read the entire line including spaces
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int capitalize = 1; // Flag to check beginning of a word

    while (str[i] != '\0') {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } 
        else if (str[i] == ' ') {
            capitalize = 1;  // Next character should be capital
        }
        i++;
    }

    printf("%s", str);

    return 0;
}
