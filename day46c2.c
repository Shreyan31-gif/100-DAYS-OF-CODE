
#include <stdio.h>

int main() {
    char str[200];
    int i, j, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || str[i] > 'z')
            continue;

        for (j = 0; j < i; j++) {
            if (str[j] == str[i]) {
                printf("First repeating character: %c\n", str[i]);
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
        printf("No repeating lowercase character\n");

    return 0;
}
