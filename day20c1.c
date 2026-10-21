
#include <stdio.h>

int main() {
    int n, digit, product = 1, found = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid number\n");
        return 0;
    }

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product = product * digit;
            found = 1;
        }

        n = n / 10;
    }

    if (found)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found\n");

    return 0;
}
