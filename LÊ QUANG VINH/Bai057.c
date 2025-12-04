#include <stdio.h>

int n;
int arr[100];
void inputNumber(int *ele, int arr[])
{
    printf("Enter number of elements: ");
    scanf("%d", ele);
    printf("Enter elements of array: ");
    for(int i = 0; i < *ele; i++)
    {
        scanf("%d", &arr[i]);   
    }
}
void replaceElements()
{
    int *p = arr;
    for(int i = 0; i < n; i++)
    {
        if(*(p + i) % 2 == 0)
        {
            *(p + i) = 0;
        }
    }
}

int main()
{
    inputNumber(&n, arr);
    replaceElements();
    printf("Array after replacing even elements with 0: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", *(arr + i)); // in bằng pointer arithmetic
    }
    printf("\n");

    return 0;
}
