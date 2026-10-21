
#include <stdio.h>

int main() {
    int n, binary = 0, place = 1, digit;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative integer\n");
        return 0;
    }

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    while (n > 0) {
        digit = n % 2;
        binary = binary + digit * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary = %d\n", binary);

    return 0;
}
