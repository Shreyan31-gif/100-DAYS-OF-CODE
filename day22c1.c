
#include <stdio.h>

int main() {
    int n, temp, digit, i, fact, sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid number\n");
        return 0;
    }

    temp = n;

    do {
        digit = temp % 10;
        fact = 1;

        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    } while (temp > 0);

    if (sum == n)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");

    return 0;
}
