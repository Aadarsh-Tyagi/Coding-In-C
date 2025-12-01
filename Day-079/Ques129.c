/*
Q129 (File Handling)
A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Show Sample Test Cases
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00
Explanation 1:
The program reads integers from the file, computes their total sum (150), and calculates the average (30.00).
*/

#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float avg;

    file = fopen("numbers.txt", "r");  // open file in read mode

    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {  // read numbers until EOF
        sum += num;
        count++;
    }

    fclose(file);

    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
