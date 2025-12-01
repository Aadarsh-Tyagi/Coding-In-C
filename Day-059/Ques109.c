/*
Q109 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Show Sample Test Cases
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700
Explanation 1:
arr2 + arr3 = 700, which is maximum.
Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39
Explanation 2:
arr1 + arr2 + arr3 + arr4 = 39, which is maximum.
Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400
Explanation 3:
arr3 = 400, which is maximum.
*/

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);            // number of elements

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);   // read array

    scanf("%d", &k);            // window size

    if (k > n || k <= 0) {
        printf("0");           // invalid window -> print 0 (you can change as needed)
        return 0;
    }

    long long windowSum = 0;
    long long maxSum = 0;

    // initial window
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    maxSum = windowSum;

    // slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i];        // add next element
        windowSum -= arr[i - k];    // remove element leaving window

        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%lld", maxSum);
    return 0;
}
