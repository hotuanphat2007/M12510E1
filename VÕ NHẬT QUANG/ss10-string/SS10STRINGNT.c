#include <stdio.h>
#include <string.h>
int main () {
    char a[10];
    printf("enter string:");
    scanf("%s",a);
    for (int i = 0; i < 10; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] +=32;
        } else if (a[i] >='a' && a[i] <= 'z') {
            a[i] -=32;
        }
    }
    printf("%s",a);
    return 0;
}