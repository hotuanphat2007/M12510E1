//Viết 1 chtrinh tính tổng số các chữ cái hoa, chữ cái thường, số và kí tự đặc biệt
#include <stdio.h>
#include <string.h>
int main()
{   
    char string[20];
    int chuhoa=0, chuthuong=0, so=0, kitu=0;
    printf ("Nhap vao 1 day ky tu:\n");
    scanf ("%s",string);
    for (int i=0; i<strlen(string); i++)
    {
        if (string[i]>64&&string[i]<92)
        {
            chuhoa++;
        }
        else if (string[i]>96&&string[i]<123)
        {
            chuthuong++;
        }
        else if (string[i]>47&&string[i]<58)
        {
            so++;
        }
        else
        {
            kitu++;
        }
    }
    printf ("Ban da nhap:\n");
    printf ("%d chu cai viet hoa\n",chuhoa);
    printf ("%d chu cai viet thuong\n",chuthuong);
    printf ("%d so\n",so);
    printf ("%d ky tu dac biet\n",kitu);
    return 0;
}