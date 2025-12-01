/*
Q76 (2D Arrays)
Check if a matrix is symmetric.

Show Sample Test Cases
Input 1:
2 2
1 2
2 1
Output 1:
True
Input 2:
2 2
1 0
2 1
Output 2:
False
*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // A matrix must be square to be symmetric
    if (n != m) {
        printf("False");
        return 0;
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != a[j][i]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
