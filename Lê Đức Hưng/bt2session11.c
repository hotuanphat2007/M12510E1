#include <stdio.h>
#include <string.h>

struct employee{
    char name[20];
    int salary;
};

int main()
{
    int n=3;
struct employee emp[n];
for(int i=0;i<n;i++){

printf("nhap ten employee %d:",i+1);
scanf("%s",emp[i].name);

printf("nhap salary cua %s: ",emp[i].name);
scanf("%d",&emp[i].salary);

}

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(emp[j].salary<emp[j+1].salary){

            struct employee temp=emp[j];
            emp[j]=emp[j+1];
            emp[j+1]=temp;
        }
    }
}

printf("danh sach tien luong giam dan la:\n");
for(int i=0;i<n;i++){
    printf("%s -%d\n",emp[i].name,emp[i].salary);
}
return 0;
}
