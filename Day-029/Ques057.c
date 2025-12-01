/*
Q57 (Arrays (1D))
Find the sum of array elements.

Show Sample Test Cases
Input 1:
4
2 4 6 8
Output 1:
20
Input 2:
3
1 1 1
Output 2:
3
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);   // read number of elements
    
    int arr[n];
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // read elements
        sum += arr[i];         // accumulate sum
    }
    
    printf("%d", sum);         // print result
    return 0;
}
