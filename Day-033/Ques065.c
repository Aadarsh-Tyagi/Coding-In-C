/*
Q65 (Arrays (1D))
Search in a sorted array using binary search.

Show Sample Test Cases
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3
Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/

#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int low = 0, high = n - 1, mid, pos = -1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            pos = mid;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(pos != -1)
        printf("Found at index %d", pos);
    else
        printf("-1");

    return 0;
}
