#include <stdio.h>
int main(){
    int days=0;
    printf("Nhap so ngay:");
    scanf("%d",&days);
    days= days % 365;
    int weeks=days/7;
    int years=days/360;
    int days_conlai =days % 7;
    printf("Years:%d\n",years);
    printf("weeks:%d\n",weeks);
    printf("Days:%d",days_conlai);
    return 0;
}
