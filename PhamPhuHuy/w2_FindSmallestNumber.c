#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter 3 number (10 20 30): ");
    scanf("%d %d %d", &a, &b, &c);
    int smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("Smallest Number: %d", smallest);
}

   