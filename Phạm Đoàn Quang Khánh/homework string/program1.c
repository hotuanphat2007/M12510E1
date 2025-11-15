//Viêt 1 chtrinh C chuyển đổi 1 chuỗi string, từ in hoa thanh viết thường, ngược lại. Các số thì không cần
#include <stdio.h>
#include <string.h>
int main ()
{
    printf ("Nhap vao 1 day ky tu\n");
    char kytu[20];
    int i;
    scanf ("%s",kytu);
    for (i=0; kytu[i]!='\0'; i++)
    {
        int chuyen = (int)kytu[i];
        if (chuyen>64&&chuyen<91)
        {
            chuyen=chuyen+32;
            kytu[i]=(char)chuyen;
        }
        else if (chuyen>96&&chuyen<123)
        {
            chuyen=chuyen-32;
            kytu[i]=(char)chuyen;
        }
    }
    kytu[i]='\0';
    printf ("Day ky tu sau chuyen doi: %s\n",kytu);
    return 0;
}