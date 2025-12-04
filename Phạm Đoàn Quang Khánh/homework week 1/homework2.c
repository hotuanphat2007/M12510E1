#include <stdio.h>
int main ()
{
    //Nguoi` dung` nhap 3 so trong bieu thuc roi` may' dua ra cac buoc giai
    int a,b,c;
    printf ("bieu thuc da cho la (a+b)*c&a|b\n");
    printf ("hay nhap a, b, c\n");
    scanf ("%d %d %d",&a,&b,&c); 
    printf ("cac buoc giai bieu thuc nhu sau:\n");
    int tong=a+b;
    printf ("(a+b)=%d\n",tong);
    int tich=tong*c;
    printf ("%d*c=%d\n",tong,tich);
    int and=tich&a;
    printf ("%d&a=%d\n",tich,and);
    int or=and|b;
    printf ("%d|b=%d\n",and,or);
    printf ("vay ket qua bieu thuc la: %d\n",or);
    return 0;

}