#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

int isValidDate(struct Date date) {
    // Check month

    if (date.month < 1 || date.month > 12) {
        return 0; // Invalid
    }

    int daysInMonth;
    switch (date.month) {
        case 2:
            // Check for leap year
            daysInMonth = ((date.year % 4 == 0 ) ? 29 : 28);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    if (date.day < 1) {
        return 0; // Invalid day
    }

    // Check year
    if (date.year < 1900 || date.year > 2100) {
        return 0; // Invalid year
    }

    return 1; // Date is valid
}

int main() {
    struct Date myDate;

    printf("Enter a date (day month year): ");
    scanf("%d %d %d", &myDate.day, &myDate.month, &myDate.year);

    if (isValidDate(myDate)) {
        printf("The entered date is valid: %02d/%02d/%d\n", myDate.day, myDate.month, myDate.year);
    } else {
        printf("The entered date is invalid.\n");
    }

    return 0;
}
