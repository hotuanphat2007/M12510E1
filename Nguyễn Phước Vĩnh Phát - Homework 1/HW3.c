#include<stdio.h>
int main() {
   int x;

   printf("Nhap so vao day: "); scanf("%d", &x);

   if(x &(1 << 1))
   x = x - (1 << 1);
   else 
   x = x + (1 << 1);

   if(x & (1 << 3))
   x = x - (1 << 3);
   else
   x = x + (1 << 3);

   printf("Ket qua: %d\n", x);

   return 0;
}