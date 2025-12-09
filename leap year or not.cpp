#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions:
    // 1. Divisible by 400  ? Leap year
    // 2. Divisible by 4 but NOT by 100 ? Leap year
    if ((year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

