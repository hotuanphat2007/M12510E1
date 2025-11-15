#include <stdio.h>
#include <string.h>
//Viết chtrinh in ra màn hình chữ cái đầu tiên không lặp lại trong 1 dãy
int main ()
{
    char str[20];
    int solan=0;
    printf ("Nhap vao day ki tu\n");
    scanf ("%s",str);
    for (int i=0; i<strlen(str);i++)
    {
        solan =0;
        for (int j=0; j<strlen(str);j++)
            {
                if(str[j]==str[i])
                {
                    solan++;
                }
            }
            if (solan==1)
            {
                printf ("Ky tu dau tien khong trung lap la ky tu thu %d: %c",i,str[i]);
                return 0;
            }
        
    }
    return 0;
}