#include <stdio.h>
#include <ctype.h>                              // dùng cho isalpha(), isdigit(), tolower()

int main(void) {
    char str[1000];
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter string: ");
    scanf("%s",&str);

    // Duyệt từng ký tự trong chuỗi
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);              // Chuyển về chữ thường để so sánh dễ hơn

        if (isalpha(ch)) {                      // nếu là ký tự alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        } 
        else if (isdigit(ch)) {
            digits++;
        } 
        else if (ch != '\n' && ch != ' ') {
            special++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;
}