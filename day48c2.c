
#include <stdio.h>

int main() {
    char str[300];
    int i = 0, j, start;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            start = i;

            while (str[i] != ' ' && str[i] != '\0' &&
                   str[i] != '\n')
                i++;

            for (j = i - 1; j >= start; j--)
                printf("%c", str[j]);
        } else {
            printf(" ");
            i++;
        }
    }

    printf("\n");
    return 0;
}
