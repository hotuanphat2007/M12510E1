#include<stdio.h>
int main() {
    int a = 0;
    printf("Nhap so ngay: ");
    scanf("%d", &a);

    int Years = a/365;
    int remaining = a%365;
    printf("Years: %d\n", Years);

    int Weaks = remaining/7;
    printf("Weaks: %d\n", Weaks);

    int Days = remaining%7;
    printf("Days: %d\n", Days);

    return 0;
}