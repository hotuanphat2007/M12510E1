#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter 4 number (10 20 30 50): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max01 = (a > b) ? a : b; 
    int max02 = (c > d) ? c : d;
    int largest = (max01 > max02) ? max01 : max02;

    printf("Largest Number: %d", largest);
}

   