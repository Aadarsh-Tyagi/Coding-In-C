/*
Q96 (Strings)
Reverse each word in a sentence without changing the word order.

Show Sample Test Cases
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50];
    int i = 0, j = 0, k = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            // Reverse the word
            for(k = j - 1; k >= 0; k--)
                printf("%c", word[k]);
            printf(" ");

            j = 0; // reset for next word
        }
        i++;
    }

    return 0;
}
