#include <stdio.h>
#include <string.h>
int menu()
{
    printf ("\n---MENU---\n");
    printf ("Chon 1 so de bat dau\n");
    printf ("1.Dang ky\n");
    printf ("2.Dang nhap\n");
    printf ("3.Thoat\n");
    int n;
    scanf ("%d",&n);
    return n;
}
void dangky(char* user, char* pass)
{
    printf ("Nhap vao ten tai khoan:\n");
    scanf ("%s",user);
    printf ("Nhap vao mat khau\n");
    scanf ("%s",pass);
    printf ("Dang ky thanh cong\n");
    /*char *p;
    p=(char*)malloc(100*sizeof(char));
    if (p==NULL)
    {
        return NULL;
    }
    scanf ("%s",p);
    return p;*/
    //Không cần cấp phát bộ nhớ động
    //Vì ở main khi gán vào Input 1 mảng đc khởi tạo trong main thì mảng kh biến mất khi function kết thúc
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
                dangky(taikhoan,matkhau); //add input taikhoan matkhau vào thì mảng từ function sẽ được lưu vào 2 biến này mà không mất sau kết thúc function
                int dadangky=1; //phải cho 1 biến để xác định đã đăng ký
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