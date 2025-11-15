#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void registerAccount(char *str1, char *str2)
{
    printf("Enter username: ");
    scanf("%99s", str1);
    printf("Enter password: ");
    scanf("%99s", str2);
}
void checkLogin(char *str1, char *str2)
{
    char strtemp1[100];
    char strtemp2[100];
    
    // strtemp1 =(char*)malloc(100 * sizeof(char));
    // strtemp2 = (char*)malloc(100 * sizeof(char));

    printf("Enter username: ");
    scanf("%99s", strtemp1);
    printf("Enter password: ");
    scanf("%99s", strtemp2);
    if(strcmp(strtemp1, str1) == 0 && strcmp(strtemp2, str2) == 0)
    {
        printf("Login successfull!!!\n");
    }else
    {
        printf("Wrong user name or password. Please check again!!!");
    }
}
int main()
{
    char *username = NULL;
    char *password = NULL;
    int input;

    username = (char*)malloc(100 * sizeof(char));
    password = (char*)malloc(100 * sizeof(char));

    if(username == NULL)
    {
        printf("Memory allocated failed!!!");
        return 1;
    }
    if(password == NULL)
    {
        printf("Memory allocated failed!!!");
        return 1;
    }
    while(1)
    {
        printf("\n*****---- MENU ----*****\n");
        printf("\t1. Register\n");
        printf("\t2. Login\n");
        printf("\t3. Exit\n");
        do
        {
            printf("Enter your choice: \n");
            scanf("%d", &input);
        } while (input > 3 || input < 1);

        switch (input)
        {
        case 1:
            registerAccount(username, password);
            break;
        case 2:
            checkLogin(username, password);
            break;
        case 3:
            free(username);
            free(password);
            return 0;
        default:
            break;
        }
    }
}