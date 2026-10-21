
#include <stdio.h>

int main() {
    char name[200];
    int i = 0, start = 0, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ')
            lastSpace = i;
        i++;
    }

    if (lastSpace == -1) {
        printf("%s", name);
        return 0;
    }

    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            if (name[i] != ' ')
                printf("%c. ", name[i]);
        }
    }

    for (i = lastSpace + 1; name[i] != '\0' &&
         name[i] != '\n'; i++)
        printf("%c", name[i]);

    printf("\n");
    return 0;
}
