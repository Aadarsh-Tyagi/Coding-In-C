/*
Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.

Show Sample Test Cases
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0};  // Frequency array for digits 0-9

    scanf("%d", &num);

    // Count frequency of digits
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    int maxDigit = 0, maxFreq = freq[0];
    for(int i = 1; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}
