#include <stdio.h>

void convertToDay(int inpDay, int *years, int *weeks, int *days)
{
    *years = inpDay / 365;
    if (*years >= 1)
    {
        int remains =inpDay % 365;
        *weeks = remains / 7;
        *days = remains % 7;
    }
}

int main()
{
    int inpDay;
    int years, weeks, days;
    printf("Your day: ");
    scanf("%d", &inpDay);

    convertToDay(inpDay, &years, &weeks, &days);

    printf("Your day %d equivalent to:\n", inpDay);
    printf("Years: %d || Weeks: %d || Days: %d", years, weeks, days);

    return 0;
}
