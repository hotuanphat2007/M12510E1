#include <stdio.h>
int main()
{
    int sodu, sotien;
    int choice;
    sodu = 5000;
    while (1)
    {
        printf("\n \n \n ------CHAO MUNG BAN DEN VOI MTA------\n");
        printf("BAN MUON LAM GI:\n");
        printf("1.KIEM TRA SO DU CUA BAN:\n");
        printf("2.RUT TIEN VE TAI KHOAN:\n");
        printf("3.NAP TIEN VAO TAI KHOAN:\n");
        printf("4.EXIT\n");
        printf("HAY NHAP TREN MAN HINH LUA CHON CUA BAN:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n \n TAI KHOAN CUA BAN CON %d\n", sodu);
            break;
        case 2:
            printf("\n \n NHAP SO TIEN BAN MUON RUT:");
            scanf("%d", &sotien);
            if (sotien < sodu)
            {
                printf("BAN DA RUT THANH CONG %d VE TAI KHOAN\n", sotien);
                printf("BAN CON %d TRONG TAI KHOAN\n", sodu - sotien);
            }
            else
            {
                printf("\n So du cua ban khong du de rut");
            }
            break;
        case 3:
            printf("\n \n NHAP SO TIEN BAN MUON NAP:");
            scanf("%d", &sotien);
            printf("BAN DA NAP THANH CONG %d VAO TAI KHOAN\n", sotien);
            printf("BAN CO %d TRONG TAI KHOAN\n", sodu + sotien);
            break;
        case 4:
            printf("\n \nNGUOI CHOI LA NGUOI THUA CON NGUOI KHONG CHOI LA NGUOI KHONG BAO GIO THANG !!!\n");
            return 0;
        default:
            printf("ERROR");
        }
    }
    return 0;
}
