#include <stdio.h>
int main(){
    
    int arr[5];
    printf("enter 5 number:");
    
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        printf("number %d :%d\n",i+1,arr[i]);}
    printf("5 so bi dao la:");
    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}