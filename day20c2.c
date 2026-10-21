
#include <stdio.h>

int main() {
    long long n, result = 0, place = 1;
    int digit, valid = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Invalid binary number\n");
        return 0;
    }

    if (n == 0) {
        printf("1's complement = 1\n");
        return 0;
    }

    while (n > 0) {
        digit = n % 10;

        if (digit != 0 && digit != 1) {
            valid = 0;
            break;
        }

        result = result + (1 - digit) * place;
        place = place * 10;
        n = n / 10;
    }

    if (valid)
        printf("1's complement = %lld\n", result);
    else
        printf("Invalid binary number\n");

    return 0;
}
