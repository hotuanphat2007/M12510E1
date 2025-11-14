#include <stdio.h>
#include <string.h>

char savedUser[50];
char savedPass[50];
int  isRegistered = 0;

void showMenu(void){
    printf("\n----- MENU -----\n");
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
}


void registerUser(void){
    printf("Enter username: ");
    scanf("%49s", savedUser);

    printf("Enter password: ");
    scanf("%49s", savedPass);

    isRegistered = 1;
    printf("Registration successful!\n");
}
int loginUser(void) {
    if (!isRegistered) {
        printf("No user registered yet! Please register first.\n");
        return 0;
    }

    char user[50];
    char pass[50];

    printf("Enter username: ");
    scanf("%49s", user);

    printf("Enter password: ");
    scanf("%49s", pass);

    if (strcmp(user, savedUser) == 0 && strcmp(pass, savedPass) == 0) {
        printf("Login successful!\n");
        return 1;
    } else {
        printf("Invalid username or password.\n");
        return 0;
    }
}

int main(void) {
    int choice;
    int loggedIn = 0;

    while (1) {
        showMenu();
    if (scanf("%d", &choice) != 1){
            printf("Invalid input. Exiting.\n");
            break;
        }
    switch (choice) {
        case 1:
            registerUser();
            break;
        case 2:
            loggedIn = loginUser();
            if (loggedIn) {
                return 0;
            }
            break;
        case 3:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
