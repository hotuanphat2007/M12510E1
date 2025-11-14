#include <stdio.h>
int main()
{
    int a = 0;
    int sonam = 0;
    int sotuan = 0;
    int songay = 0;

    printf("Nhap so ngay: ");
    scanf("%d", &a);
    sonam = a / 365;
    printf("So Nam: %d\n", sonam);
    sotuan = (a - sonam * 365)/ 7;
    printf("So Tuan: %d\n", sotuan);
    songay = a - (sonam * 365) - (sotuan * 7);
    printf("So Ngay: %d\n", songay);
return 0;
}
