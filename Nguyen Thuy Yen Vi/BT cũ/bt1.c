#include <stdio.h>

int main() {
    int totalDays, Years, Weeks, Days;
    printf("Number of days: ");
    scanf("%d", &totalDays);

    Years = totalDays / 365;
    Weeks = (totalDays % 365) / 7;
    Days = (totalDays % 365) % 7;

    printf("Years: %d\n", Years);
    printf("Weeks: %d\n", Weeks);
    printf("Days: %d\n", Days);
    return 0;
}