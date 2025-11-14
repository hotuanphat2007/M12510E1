//Viết hàm nhận 5 số thực và tính trung bình 5 số. Gọi ra hàm trong main và in kết quả
#include <stdio.h>
#include <stdlib.h>
float *get(int n)
{
    float *arr=NULL;
    arr=(float*)malloc(n*sizeof(float));
    if (arr==NULL)
    {
        printf ("Tran bo nho!!\n");
        return NULL; //không thể return 1 vì đang cho hàm trả về là 1 con trỏ *float
    }
    printf ("Nhap vao %d phan tu:\n",n);

    for (int i=0; i<n; i++)
    {
        scanf ("%f",&arr[i]);
    }
    return arr;
} 
float average(int n,float ar[n])
{
    float tong=0;
    float avr;
    for (int i=0; i<n; i++)
    {
        tong+=ar[i];
    }
    return avr=tong/(float)n;
}
int main()
{
    int n;
    printf ("Nhap vao so luong cac so hang can tinh trung binh:\n");
    scanf ("%d",&n);
    float *arr; //khai báo con trỏ, không khai bảo mảng. Vì con trỏ chỉ đến 1 mảng được, nhưng khai báo mảng thì địa chỉ sẽ cố định, chỉ có thể ghi lên, không thể thay đổi qua mảng khác

    arr=get(n); //add con trỏ trên function vào con trỏ của main (function *get trả về 1 con trỏ)
    if (arr==NULL)
    {
        //Không báo lỗi nữa vì trên hàm get(n) đã báo lỗi rồi
        return 1; 
    }
    float trungbinh=average(n,arr);
    printf ("Trung binh cua %d so là: %.2f\n",n,trungbinh);
    free(arr);
    return 0;
}