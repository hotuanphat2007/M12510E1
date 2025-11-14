#include <stdio.h>
#include <stdlib.h>
//Viết chtrinh nhập vào 1 mảng, kiểm tra các phần tử chẵn, sau đó thay thế phần tử chẵn =0 rồi in lại mảng
int main ()
{
    int *p=NULL;
    int n;
    printf ("Nhap vao so phan tu trong mang\n");
    scanf ("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    if (p==NULL)
    {
        printf ("Tran bo nho\n");
        return 1;
    }
    printf ("Nhap %d phan tu vao mang:\n",n);
    for (int i=0; i<n; i++)
    {
        scanf ("%d",(p+i)); //tương tự &p[i] hay &*(p+i)
    }
    printf ("Cac phan tu da nhap la:\n");
    for (int i=0; i<n; i++)
    {
        printf ("%d\t",*(p+i)); //Hoặc p[i]
    }
    printf ("\n");
    for (int i=0; i<n; i++)
    {
        if (p[i]%2==0)
        {
            p[i]=0;
        }
    }
    printf ("Cac phan tu sau thay the la:\n");
    for (int i=0; i<n; i++)
    {
        printf ("%d\t",p[i]);
    }
    free(p);
    return 0;
}