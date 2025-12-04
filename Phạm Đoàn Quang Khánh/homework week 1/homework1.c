#include <stdio.h>
int main ()
{
    int numday, year,year1, week, day;
    printf ("Nhap vao so ngay: ");
    scanf ("%d",&numday);
    year=numday/365;
    year1=numday%365;
    week=year1/7;
    day=year1%7;
    printf ("So ngay ban nhap tuong ung voi %d nam, %d tuan va %d ngay",year, week, day);
    return 0;
}