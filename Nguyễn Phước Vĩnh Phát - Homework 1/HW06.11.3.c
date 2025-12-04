#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++ )
    {
        scanf("%d", &arr[i]);
    }

    printf("Number in reverse order:\n");

    for(int i = 4; i > -1 ; i--)
    {
printf("%d\t",arr[i]);
    }
    
    return 0;
}