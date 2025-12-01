/*
Q69 (Arrays (1D))
Find the second largest element in an array.

Show Sample Test Cases
Input 1:
5
10 20 30 40 50
Output 1:
40
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], second = -999999;

    for(int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("%d", second);

    return 0;
}


