
#include <stdio.h>

int main() {
    char str[200], temp;
    int i = 0, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
        i++;

    j = i - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    str[j < 0 ? 0 : 0] = str[0];
    printf("Reversed string: ");

    while (str[i] != '\0' && str[i] != '\n')
        i++;

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c", str[i]);

    printf("\n");
    return 0;
}
