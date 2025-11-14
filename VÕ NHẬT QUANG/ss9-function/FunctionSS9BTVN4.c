#include <stdio.h>
#include <string.h>
char username[50];
char password[50];
char user[50];
char pass[50];
void registeruser()
{
    printf("Username to register:\t");
    scanf("%s", &username);
    printf("Password to register:\t");
    scanf("%s", &password);
    printf("\n-----REGISTER SUCCESSFULLY!!!-----\n");
    printf("%s\n", username);
    printf("%s\n", password);
    return;
}
char login()
{
    printf("Enter UserName:\t");
    scanf("%s", &user);
    printf("Enter PassWord:\t");
    scanf("%s", &pass);
    if (strcmp(user, username) == 0 && strcmp(pass, password) == 0)
    {
        printf("\nLOGIN SUCCESSFULLY !!!\n");
    }
    else
    {
        printf("INCORECT USER and PASSWORD !!!!\n");
        printf("please enter again !!!\n");
    }
    return 0;
}
int main()
{
    int choice;
    while (1)
    {
        printf("-----WELCOME TO GAYCLUB-----\n");
        printf("1.REGISTER TO GAYCLUB\n");
        printf("2.LOGIN TO GAYCLUB\n");
        printf("3.EXIT GAYCLUB\n");
        printf("ENNTER YOUR CHOICE: \t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            registeruser();
            break;
        case 2:
            login();
            break;
        case 3:
            printf("YOU ARE NOT GAY");
            return 0;
        default:
            break;
        }
    }

    return 0;
}