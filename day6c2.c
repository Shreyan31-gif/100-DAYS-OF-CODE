
#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Positive number\n");
    else if (n < 0)
        printf("Negative number\n");
    else
        printf("Zero\n");

    return 0;
}
