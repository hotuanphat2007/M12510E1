#include <stdio.h>
int recursion(int num, int arr[num])
{
    if (num==0)
    return 0; 
    else
    {
    return arr[num-1]+recursion(num-1,arr); 
    }
}
int main()
{
    int n;
    printf ("Number of element: \n");
    scanf ("%d",&n);
    int arr[n];
    printf ("Nhap vao %d so\n",n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=recursion(n,arr); 
    printf ("Sumary is : %d", sum);
    return 0;
}