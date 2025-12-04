#include <stdio.h>
int main ()
{
    //do sẽ chuyển đổi bit 2 và bit 4 tính từ trái qua trong 5 bit xxxxx
    //nên ta sẽ XOR số đã cho với một số có dãy bit =1 ở 2 vị trí 2 và 4 từ trái qua
    //dãy bit ta có là 01010 tương ứng với số 10
    int x, kq;
    printf ("Nhap so can chuyen doi: ");
    scanf ("%d",&x);
    kq=x^10;
    printf ("So sau khi chuyen doi la: %d", kq);
    return 0;
}