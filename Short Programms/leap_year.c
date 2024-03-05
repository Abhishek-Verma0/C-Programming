//  finding whether given year is leap year or not using switch cases. 

#include <stdio.h>


#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    switch ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        case 1:
            printf("%d is a leap year.\n", year);
            break;
        default:
            printf("%d is not a leap year.\n", year);
            break;
    }

    return 0;
}
