
#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200], temp[400];

    printf("Enter first string: ");
    scanf("%199s", a);

    printf("Enter second string: ");
    scanf("%199s", b);

    if (strlen(a) != strlen(b)) {
        printf("Not a rotation\n");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    if (strstr(temp, b) != NULL)
        printf("One string is a rotation of another\n");
    else
        printf("Not a rotation\n");

    return 0;
}
