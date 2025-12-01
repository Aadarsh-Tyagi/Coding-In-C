/*
Q70 (Arrays (1D))
Rotate an array to the right by k positions.

Show Sample Test Cases
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    k = k % n;  // Reduce unnecessary full rotations

    int rotated[n];
    int index = 0;

    // Place last k elements first
    for(int i = n - k; i < n; i++)
        rotated[index++] = arr[i];

    // Place the remaining elements
    for(int i = 0; i < n - k; i++)
        rotated[index++] = arr[i];

    // Print result
    for(int i = 0; i < n; i++)
        printf("%d ", rotated[i]);

    return 0;
}
