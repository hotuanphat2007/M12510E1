#include <stdio.h>
int main() {
    int num;
    int dem = 0;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    if (num == 0) {
        dem = 1;
    } else {
        if (num < 0) {
            num = -num;
        }
        while (num != 0) {
            num = num / 10;  
            dem++;
        }
    }
    printf("So chu so: %d\n", dem);
return 0;
}
