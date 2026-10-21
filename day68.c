
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input\n");
        return 0;
    }

    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        actualSum += x;
    }

    printf("%lld\n", expectedSum - actualSum);

    return 0;
}
