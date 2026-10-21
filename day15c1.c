
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Enter a number between 0 and 20\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }

        printf("Factorial = %llu\n", fact);
    }

    return 0;
}
