#include <stdio.h>
int main(){
  int a=0,b=0,c=0;
  printf("nhap a: ");
  scanf("%d",&a);
  printf("nhap b: ");
  scanf("%d",&b);
  printf("nhap c: ");
  scanf("%d",&c);
  
  int tong=a+b;
  int tich= tong * c;
  int bit_and= tich & a;
  int bit_or= bit_and | b;
  int result= (a+b)*c & a | b;
  printf("Step-by-step:\n");
  printf("(a+b)=%d\n(a+b)*c=%d\n(a+b)*c & a = %d\n(a+b)*c & a | b = %d\nresult:%d",tong,tich,bit_and,bit_or,result);
  return 0;
}


