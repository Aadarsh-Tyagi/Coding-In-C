/*
Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Show Sample Test Cases
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[15];
    char day[3], month[3], year[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    scanf("%s", date);

    // Extract parts
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    int m = atoi(month); // Convert string to integer

    printf("%s-%s-%s", day, months[m - 1], year);

    return 0;
}
