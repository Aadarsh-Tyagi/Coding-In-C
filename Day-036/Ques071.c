/*
Q71 (2D Arrays)
Read and print a matrix.

Show Sample Test Cases
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    // Read matrix elements
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Print matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");  // Move to next row
    }

    return 0;
}
