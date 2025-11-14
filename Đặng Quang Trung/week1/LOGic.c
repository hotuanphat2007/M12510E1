#include <stdio.h>
int main()
{
    int x = 29; 
    int leftshift3= (1 << 3);
    int leftshift1= (1 << 1);
    int gop_bit=leftshift1 | leftshift3 ;
    int new_value=x ^ gop_bit;
    printf("New value =%d",new_value);
    return 0;
}