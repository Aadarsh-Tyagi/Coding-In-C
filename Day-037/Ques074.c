/*
Q74 (2D Arrays)
Find the transpose of a matrix.

Show Sample Test Cases
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], t[c][r];

    // Read matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Compute transpose
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    // Print transpose matrix
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
