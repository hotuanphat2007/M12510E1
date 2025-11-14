#include <stdio.h>
int main(){
    int x = 29; 
    int leftshift3= (1 << 3);//(1000)
    int leftshift1= (1 << 1);//(0010)
    int gop_bit=leftshift1 | leftshift3 ;//1000 | 0010 = 1010

    int new_value=x ^ gop_bit;
    printf("New value =%d",new_value);

    return 0;
}

//11101
//01010
//10111