#include <stdio.h>
int Recursion(int arr[], int n)
{
    if (n == 1)
        return arr[0]; // bai toan nho nhat
    else
    {
        return arr[n - 1] + Recursion(arr, n - 1);
    } // cong thuc hoi quy
}

int main()
{
    int n;
    printf("nhap so phan tu:\n");
    scanf("%d", &n);
    int a[n];
    printf("nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = Recursion(a, n);
    printf("tong cua cac phan tu la %d", sum);
    return 0;
}