/*
Q73 (2D Arrays)
Find the sum of each row of a matrix and store it in an array.

Show Sample Test Cases
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], rowSum[r];

    // Initialize rowSum array to zero
    for(int i = 0; i < r; i++) {
        rowSum[i] = 0;
    }

    // Read matrix and calculate row-wise sum
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    // Print row sum array
    for(int i = 0; i < r; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
