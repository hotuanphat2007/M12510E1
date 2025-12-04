#include <stdio.h>
int main(){
    int x, result;
    printf("Enter a number: ");
    scanf("%d", &x);
    //Toggle 2nd and 4th bits using XOR
    result = x ^ (1 << 1); // 2nd bit (position 1)
    result = result ^ (1 << 3); // 4th (bit position 3)
    printf("new value = %d\n", result);
    return 0;
}