#include <stdio.h>

int main() {
    int a, b, c, d, largest;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // So sánh a và b → lấy số lớn hơn
    int max1 = (a > b) ? a : b;

    // So sánh c và d → lấy số lớn hơn
    int max2 = (c > d) ? c : d;

    // So sánh hai kết quả → lấy số lớn nhất
    largest = (max1 > max2) ? max1 : max2;

    printf("The largest number is: %d\n", largest);
    return 0;
}
