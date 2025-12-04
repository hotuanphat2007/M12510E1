#include <stdio.h>
int main()
{
    int ngay, nam, tuan, ngayconlai;

    printf("Nhap so ngay: ");
    scanf("%d", &ngay);

    nam = ngay / 365;               
    tuan = (ngay % 365) / 7;         
    ngayconlai = (ngay % 365) % 7; 

    printf("So ngay: %d\n", ngay);
    printf("Nam: %d\n", nam);
    printf("Tuan: %d\n", tuan);
    printf("Ngay: %d\n", ngayconlai);

    return 0;
}


