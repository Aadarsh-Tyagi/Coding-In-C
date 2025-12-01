/*
Q67 (Arrays (1D))
Insert an element in an array at a given position.

Show Sample Test Cases
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/

#include <stdio.h>

int main() {
    int n, pos, element;
    scanf("%d", &n);

    int arr[n + 1]; // extra space for insertion

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &element); // position and element

    // Shift elements to the right from position
    for(int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = element; // Insert new element
    n++;

    // Print updated array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
