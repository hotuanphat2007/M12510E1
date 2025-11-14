#include <stdio.h>
#include <time.h>
void printcurrentdate()
{
    time_t t;
    struct tm *currentTime;
    char dateString[20];
    time(&t);
    currentTime = localtime(&t);
    strftime(dateString, sizeof(dateString), "%d-%m-%y", currentTime);
    printf("Current Date: %s\n", dateString);
}
int main()
{
    printcurrentdate();
    return 0;
}