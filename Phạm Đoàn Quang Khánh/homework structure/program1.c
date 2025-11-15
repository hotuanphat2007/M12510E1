#include <stdio.h>
#include <string.h>
struct SV
{
    char name[20];
    int stt;
    float diem;
};
void sosanhdiem (struct SV diem1,struct SV diem2)
{
    if (diem1.diem>diem2.diem)
    {
        printf ("Sinh vien %s co diem lon nhat la: %.2f",diem1.name,diem1.diem);
    }
    else if (diem1.diem<diem2.diem)
    {
        printf ("Sinh vien %s co diem lon nhat la: %.2f",diem2.name,diem2.diem);
    }
    else 
    {
        printf ("2 sinh vieen %s va %s co diem bang nhau la: %.2f",diem1.name, diem2.name, diem1.diem);
    }
}
int main()
{
    struct SV sinhvien[2];

    for (int i=0; i<2; i++)
    {
        printf ("Nhap ten cua sinh vien thu %d ", i+1);
        scanf ("%s",sinhvien[i].name);
        printf ("Nhap so thu tu cua sinh vien thu %d ",i+1);
        scanf ("%d",&sinhvien[i].stt);
        printf ("Nhap diem so cua sinh vien thu %d ",i+1);
        scanf ("%f",&sinhvien[i].diem);
    }
    sosanhdiem(sinhvien[0],sinhvien[1]);
    return 0;


}
