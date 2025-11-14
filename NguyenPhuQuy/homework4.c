#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Nhap a: ");
    scanf("%d",&a); 
    printf("Nhap b: ");
    scanf("%d",&b);
    printf("Nhap c: ");
    scanf("%d",&c);
    printf("Step by step:\n");
    int result = (a+b);
    printf("(a + b) = %d \n",result);
    int result1 = result * c;
    printf(" %d * c = %d \n", result,result1);
    int result2 = result1 & a;
    printf("%d & a = %d \n", result1,result2);
    int result3 = result2 | b;
    printf("%d | b = %d  \n",result2,result3);
    printf("Result = %d", result3);
    return 0;
}