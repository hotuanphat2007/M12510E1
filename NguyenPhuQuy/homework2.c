#include <stdio.h>
int main()
{
    int a ;
    printf("Nhap so: ");
    scanf ("%d",&a);

    int pos2 = 1 << 1;
    int pos4 = 1 << 3;
    int ghep2vitri = pos2 | pos4;
    int num = a ^ ghep2vitri;

    printf("Gia tri toggle Shift Left to Right cua bit 2 va 4: %u\n", num);
    return 0;
}