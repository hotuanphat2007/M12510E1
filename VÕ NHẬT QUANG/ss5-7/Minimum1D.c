#include <stdio.h>
int main (){ 
    int m,min;
    printf("nhap so phan tu cua mang:");
    scanf("%d",&m);
    printf("nhap cac phan tu:");
int a[m];
for (int i = 0; i<m;i++) {
scanf("%d",&a[i]);
}
for (int i= 0; i <m;i++){
    if (a[i] < min){
        min = a[i];
    }
    
}
printf("%d la so nho nhat trong %d phan tu cua mang",min,m);


    return 0;
}