
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, vowels = 0, consonants = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + ('a' - 'A');

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
