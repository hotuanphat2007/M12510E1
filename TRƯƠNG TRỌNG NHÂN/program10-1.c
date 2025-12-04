#include <stdio.h>

void toggle() {
    char str[200];
    int i;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;     
        else if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;     
    }

    printf("Result: %s", str);
}

int main() {
    toggle();
    return 0;
}
