// Viết chtrinh C tạo 1 bộ nhớ động, ghi vào đó 1 mảng rồi in ra màn hình kết quả đảo ngược thứ tự
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p=NULL;
    int n;
    printf ("Nhap vao so phan tu\n");
    scanf ("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf ("Nhap %d phan tu vao mang:\n",n);
    if (p==NULL)
    {
        printf ("Khong the cap phat bo nho\n");
        return 1;
    }
    else
    {
        for (int i=0; i<n; i++)
        {
            scanf ("%d",&p[i]); //p[i]=*(p+i) :khong phai dia chi/con tro, nen cho & vao
        }
    }
    printf ("Mang dao nguoc la:\n");
    for (int i=n-1; i>=0; i--)
    {
        printf ("%d\t",*(p+i)); //Hoặc p[i]
    }
    free(p);
    return 0;
}