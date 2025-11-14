#include <stdio.h>
#include <string.h>
int menu()
{
    printf ("\n---MENU---\n");
    printf ("Begining number: \n");
    printf ("1.Sign up\n");
    printf ("2.Log in\n");
    printf ("3.Exit\n");
    int n;
    scanf ("%d",&n);
    return n;
}
void dangky(char* user, char* pass)
{
    printf ("Type account: \n");
    scanf ("%s",user);
    printf ("Type password: \n");
    scanf ("%s",pass);
    printf ("Successed!\n");
}
int main()
{
    int luachon;
    while (1)
    {
        luachon=menu();
        switch (luachon)
        {
            case 1:
                char taikhoan[100];
                char matkhau[100];
                dangky(taikhoan,matkhau); 
                int dadangky=1; 
                break;
            case 2:
            char mytaikhoan[100];
            char mymatkhau[100];
            if (dadangky!=1)
            {
                printf ("Xin vui long dang ky truoc\n");
            }
            else 
            {
                printf ("Nhap ten tai khoan\n");
                scanf ("%s",mytaikhoan);
                printf ("Nhap mat khau\n");
                scanf ("%s",mymatkhau);
                if (strcmp(mytaikhoan,taikhoan)==0 && strcmp(mymatkhau,matkhau)==0)
                {
                    printf ("Dang nhap thanh cong\n");
                }
                else 
                {
                    printf ("Dang nhap that bai. Vui long kiem tra tai khoan hoac mat khau");
                }
            }
            break;
            case 3:
                printf ("Cam on da su dung dich vu\n");
                return 0;
            default: printf ("Vui long chon lai\n");
        }
    }
    return 0;
}