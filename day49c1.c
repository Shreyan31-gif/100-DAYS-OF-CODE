
#include <stdio.h>

int main() {
    char name[200];
    int i = 0, newWord = 1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] != ' ' && newWord) {
            printf("%c.", name[i]);
            newWord = 0;
        }

        if (name[i] == ' ')
            newWord = 1;

        i++;
    }

    printf("\n");
    return 0;
}
