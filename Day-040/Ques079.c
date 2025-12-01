/*
Q79 (2D Arrays)
Perform diagonal traversal of a matrix.

Show Sample Test Cases
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for (int k = 0; k <= n + m - 2; k++) {
        if (k % 2 == 0) {  // Upwards direction
            for (int i = n - 1; i >= 0; i--) {
                int j = k - i;
                if (j >= 0 && j < m)
                    printf("%d ", a[i][j]);
            }
        } else {  // Downwards direction
            for (int j = m - 1; j >= 0; j--) {
                int i = k - j;
                if (i >= 0 && i < n)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
