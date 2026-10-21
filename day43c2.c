
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
        i++;

    j = i - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
