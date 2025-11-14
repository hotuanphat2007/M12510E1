#include <stdio.h>
int main()
{
    int so_ngay;
    printf("Nhap so ngay: ");
    scanf("%d",&so_ngay);
    int ngay_sang_nam = so_ngay/365;
    printf("Years : %d \n", ngay_sang_nam);
    int ngay_sang_tuan = so_ngay/7;
    printf("Weeks : %d \n",ngay_sang_tuan);
    int ngay_sang_thang = so_ngay/30;
    printf("Month : %d \n",ngay_sang_thang);
    return 0;
}