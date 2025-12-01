/*
Q72 (2D Arrays)
Find the sum of all elements in a matrix.

Show Sample Test Cases
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
*/

#include <stdio.h>

int main() {
    int r, c, sum = 0;
    scanf("%d %d", &r, &c);

    int a[r][c];

    // Read matrix elements
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];  // Add each element to sum
        }
    }

    printf("%d", sum);

    return 0;
}
