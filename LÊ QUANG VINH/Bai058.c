#include <stdio.h>
#include <time.h>

void printCurrentDate()
{
    time_t t = time(NULL);              //hoặc time(&t)
    printf("Thoi gian hien tai la: %ld\n",t);
    printf("Dang chuoi: %s", ctime(&t));
}
int main()
{
 printCurrentDate();
 return 0;
}