
#include <stdio.h>

int main() {
    char str[300], word[100];
    int i = 0, j, len, max = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        while (str[i] == ' ')
            i++;

        start = i;
        len = 0;

        while (str[i] != ' ' && str[i] != '\0' &&
               str[i] != '\n') {
            len++;
            i++;
        }

        if (len > max) {
            max = len;
            for (j = 0; j < len; j++)
                word[j] = str[start + j];
            word[len] = '\0';
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;
    }

    if (max > 0)
        printf("Longest word: %s\n", word);
    else
        printf("No word found\n");

    return 0;
}
