#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int mark;
};

void comparemarks(struct student s1 ,struct student s2 ){
    if(s1.mark > s2.mark){
        printf("%s has higher marks : %d",s1.name,s1.mark);
    }else{
            printf("%s has higher marks: %d",s2.name,s2.mark);
        }
    }
int main(){
        struct student student1,student2; 
        printf("nhap ten hoc sinh 1:\n");
        scanf("%s",student1.name);
        printf("nhap diem hoc sinh:\n");
        scanf("%d",&student1.mark);

        printf("nhap ten hoc sinh 2:\n");
        scanf("%s",student2.name);
        printf("nhap diem hoc sinh:\n");
        scanf("%d",&student2.mark);

        comparemarks(student1,student2 );
        return 0;
}