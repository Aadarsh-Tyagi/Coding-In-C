/*
Q113 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

Show Sample Test Cases
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5
Explanation 1:
4th smallest element in the given array is 5.
Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7
Explanation 2:
3rd smallest element in the given array is 7.
*/

#include <stdio.h>

// Function to sort the array using simple bubble sort (can use any sort)
void sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    scanf("%d", &n);   // input array size

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);    // input k

    sort(arr, n);       // sort array

    printf("%d", arr[k-1]);   // kth smallest (0-based index)

    return 0;
}
