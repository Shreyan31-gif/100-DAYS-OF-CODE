
#include <stdio.h>

int main() {
    int n, x;
    long long left, right;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("-1\n");
        return 0;
    }

    for (x = 1; x <= n; x++) {
        left = (long long)x * (x + 1) / 2;
        right = (long long)n * (n + 1) / 2
                - (long long)(x - 1) * x / 2;

        if (left == right) {
            printf("Pivot integer = %d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
