
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    printf("Number of characters = %d\n", i);

    return 0;
}
