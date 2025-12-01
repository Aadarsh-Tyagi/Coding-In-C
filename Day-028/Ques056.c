/*
Q56 (Arrays (1D))
Read and print elements of a one-dimensional array.

Show Sample Test Cases
Input 1:
3
10 20 30
Output 1:
10 20 30
Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int n, i, arr[100];

    scanf("%d", &n);   // input size

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // read array elements
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // print array elements
    }

    return 0;
}
