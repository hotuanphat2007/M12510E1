#include <stdio.h>
#include <stdlib.h>

float *get(int n){
    float *arr = NULL;
    arr = (float*)malloc(n * sizeof(float));
    if (arr == NULL){
        printf("Tran bo nho!!\n");
return NULL;
    }
    printf("Nhap vao %d phan tu:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
return arr;
}
float average(int n, float ar[n]){
    float tong = 0;
    float avr;
    for (int i = 0; i < n; i++){
        tong += ar[i];
    }
    return avr = tong / (float)n;
}
int main(){
    int n;
    printf("Nhap vao so luong cac so :\n");
    scanf("%d", &n);
    float *arr;
    arr = get(n);
if (arr == NULL){
    return 1;
    }
    float trungbinh = average(n, arr);
    printf("Trung binh %d so la: %.2f\n", n, trungbinh);
    free(arr);
return 0;
}