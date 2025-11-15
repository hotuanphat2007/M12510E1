#include <stdio.h>
#include <string.h>
    //định nghĩa 1 structure hình tròn với bán kính. Viết function cho 1 con trỏ vào structure
    //tính toán và lưu trữ kết quả diện tích và chu vi
struct hinhtron
{
    float bankinh;
    float chuvi;
    float dientich;
};
void tinhtoan(struct hinhtron *tron) //đưa vào con trỏ, cho trỏ vào địa chỉ structure trong main thì sẽ ghi được kết quả vào structure trong main
{
    tron->chuvi=tron->bankinh*3.14*2; 
    tron->dientich=tron->bankinh*tron->bankinh*3.14;
    //cú pháp để truy cập con trỏ từ structure là <tên structure> -> <phần tử trong structure>
    //GHI NHỚ: (.) truy cập vào biến, gọi giá trị 
    //GHI NHỚ: (->) truy cập thông qua địa chỉ
}
int main()
{
    struct hinhtron circle;
    printf ("Nhap vao ban kinh hinh tron:\n");
    scanf ("%f",&circle.bankinh);
    tinhtoan (&circle); //truyền vào địa chỉ, để con trỏ trong function chỉ tới và lưu kết quả vào, kh cần return
    printf ("Ban kinh hinh tron la: %.2f\n",circle.bankinh);
    printf ("Chu vi hinh tron la: %.2f\n",circle.chuvi);
    printf ("Dien tich hinh tron la: %.2f\n",circle.dientich);
    return 0;
}