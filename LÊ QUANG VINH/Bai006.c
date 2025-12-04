#include <stdio.h>
#include <math.h>

int main()
{
    int day, days, weeks, years;

    printf("Input number of days: ");
    scanf("%d", &day);

    years = day/365;
    weeks = (day%365)/7;
    days = (day%365)%7;

    printf("\nYears: %d", years);
    printf("\nWeeks: %d", weeks);
    printf("\nDays: %d", days);
return 0;

}