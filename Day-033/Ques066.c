/*
Q66 (Arrays (1D))
Insert an element in a sorted array at the appropriate position.

Show Sample Test Cases
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/

#include <stdio.h>

int main() {
    int n, element;
    scanf("%d", &n);

    int arr[n+1];  // Extra space for insertion
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    int i = n - 1;

    // Shift elements to the right until correct position is found
    while(i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element; // Insert element
    n++; // New size

    // Print array
    for(int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
