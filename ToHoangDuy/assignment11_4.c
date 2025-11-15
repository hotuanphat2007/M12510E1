#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	while(1)
	{
		system("cls");

		int choice;
		char reg_username[20], reg_password[20];
		printf("----- MENU -----\n");
		printf("1. Register\n");
		printf("2. Login\n");
		printf("3. Exit\n");
		printf("Enter your choice: "); scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				printf("Enter username: "); scanf("%s", reg_username);
				printf("Enter password: ");	scanf("%s", reg_password);
				break;

			case 2:
				char log_username[20], log_password[20];
				printf("Enter username: "); scanf("%s", log_username);
				printf("Enter password: ");	scanf("%s", log_password);
				if((strcmp(reg_username, log_username) == 0) && (strcmp(reg_password, log_password) == 0))
				{
					printf("Login successful!\n");
				} else {
					printf("Login fail!\n");
				}
				break;

			case 3:
				return 0;
			
			default:
				printf("Invalid number!\n");
				break;
		}
		system("pause");
	}
}