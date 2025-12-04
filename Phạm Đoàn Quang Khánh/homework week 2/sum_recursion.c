//Dùng function recursion (đệ quy) để tính tổng n số
#include <stdio.h>
int recursion(int so, int arr[so])
{
    if (so==0)//Phai co 1 dieu kien de break.
    return 0; 
    else
    {
    return arr[so-1]+recursion(so-1,arr); //so-1 la vi chay tu 0-(n-1). Va thuc hien phep tru de de~ kiem soat dkien break
    //neu de quy recursion (so-1,arr[so-1]) se sai vi arr[so-1] la 1 bien thu (so-1) trong mang arr
    }
}
int main()
{
    int n;
    printf ("Ban muon tao 1 mang gom bao nhieu so\n");
    scanf ("%d",&n);
    int arr[n];
    printf ("Nhap vao %d so\n",n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=recursion(n,arr); //Dua dia chi mang arr, khong dua arr[n] vi may hieu mang? thu n cua arr
    printf ("Tong cua cac so trong mang la: %d", sum);
    return 0;
}