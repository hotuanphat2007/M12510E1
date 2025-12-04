#include <stdio.h>
#include <string.h>

struct NV
{
    int salary;
    char name[20];
};
void bubblesort (struct NV arr[], int size)
{
    struct NV temp; //1 bien struct luu tam thoi trong qua trinh chay function
    for (int i=0; i<size-1;i++)
    {
        for (int j=0; j<size-i-1; j++)
        {
            if (arr[j].salary>arr[j+1].salary)
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    struct NV employ[3];
    for (int i=0; i<3; i++)
    {
        printf ("Nhap vao ten NV %d\n",i+1);
        scanf ("%s",employ[i].name);
        printf ("Nhap vao tien luong NV %d\n",i+1);
        scanf ("%d",&employ[i].salary);
    }
    bubblesort(employ,3);
    for (int i=2; i>=0; i--)
    {
        printf ("%s co tien luong la %d\n",employ[i].name,employ[i].salary);
    }
    return 0;

}