
#include <stdio.h>

int main() {
    int n, original, temp, digit;
    int digits = 0;
    int sum = 0;
    int power, i;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid number\n");
        return 0;
    }

    original = n;
    temp = n;

    do {
        digits++;
        temp = temp / 10;
    } while (temp != 0);

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
