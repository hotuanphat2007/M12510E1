//Viết 1 chtrinh loại bỏ hết mọi khoảng trắng trong dãy và viết liền dòng
#include <stdio.h>
#include <string.h>
int main ()
{
    char ten[100];
    char temp[100];
    int j=0;
    printf ("Nhap vao ho ten ban\n");
    scanf ("%[^\n]",ten);
    for (int i=0; i<strlen(ten);i++)
    {
        if (ten[i]!=32) //thay vì dò gặp khoảng trống thì bỏ không in ra, sẽ tạo 1 mảng khác, dò không phải khoảng trống thì ghi vào
        {
            temp[j]=ten[i];
            j++; //Nếu gặp khoảng trống thì không if, j không ++, mảng temp sẽ có được 1 dãy chữ cái liên tục
        }
    }
    temp[j]='\0';
    printf ("Ho va ten cua ban khong dau la: %s\n",temp);
    //TESTTTT cach 2
    printf ("Ho ten khong dau: ");
    for (int i=0; i<strlen(ten);i++)
    {
        if (ten[i]!=32)
        {
            printf ("%c",ten[i]);
        }
    }
    return 0;
}