#include <stdio.h>

int getDayOfWeek(int day, int month, int year) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (month < 3) {
        year -= 1;
    }
    return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void printCalendar(int year) {
    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    printf("\n==================== CALENDAR %d ====================\n", year);

    int currentDay = getDayOfWeek(1, 1, year);

    for (int month = 0; month < 12; month++) {
        printf("\n  ------------ %s ------------\n", months[month]);
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        for (int space = 0; space < currentDay; space++) {
            printf("     ");
        }

        for (int day = 1; day <= daysInMonth[month]; day++) {
            printf("%5d", day);

            if (++currentDay > 6) {
                currentDay = 0;
                printf("\n");
            }
        }
        
        if (currentDay != 0) {
            printf("\n");
        }
    }
}

int main() {
    int year;

    printf("Enter the year (e.g., 2026): ");
    if (scanf("%d", &year) != 1 || year < 1) {
        printf("Invalid input. Please enter a valid positive year.\n");
        return 1;
    }

    printCalendar(year);

    return 0;
}
