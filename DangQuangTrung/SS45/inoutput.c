#include <stdio.h>
int main()
{
    printf("enter proName: ");
    char producName[50];
    scanf("%s",producName);
    
    printf("enter quantity: ");
    int quantity;
    scanf("%d",&quantity);

    printf("enter price: ");
    float price,total= 0.0;
    scanf("%f",&price);

    total=quantity*price;
    FILE *file =fopen("invoice.txt","w");
    if (file==NULL)
    {
        printf("File not found\n");
        return 1;
    }
    fprintf(file,"product name: %s\n",producName);
    fprintf(file,"quantity: %d\n",quantity);
    fprintf(file,"price: %.2f\n",price);
    fprintf(file,"total: %.2f\n",total);
    fclose(file);
    printf("invoice written to invoice.txt successfully.\n");
    return 0;

}