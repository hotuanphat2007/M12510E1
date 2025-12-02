#include <stdio.h>

int main(){
    int num;
    int i = 0;
    printf("Enter numbers: ");
    scanf("%d", &num);
    while(num != 0){
        num = num / 10; i++;
    }
    printf("Number of digits:%d\n", i);
}