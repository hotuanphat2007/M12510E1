#include <stdio.h>
#include <time.h>
void prinCurrentDate(){
    time_t t;
    struct tm *Currentime;
    char dateString[20];
    time(&t);
    Currentime = localtime(&t);
    strftime(dateString, sizeof(dateString), "%d - %m - %y ", Currentime);
    printf("Current Date: %s \n", dateString);
}
int main(){
    prinCurrentDate();
return 0;
}

