
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of terms\n");
        return 0;
    }

    sum = 1.0;

    for (i = 2; i <= n; i++) {
        sum = sum + (double)(2 * i - 1) / (2 * i);
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}
