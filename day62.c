
#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    int x;
    scanf("%d", &x);

    long long currentSum = x;
    long long maxSum = x;

    for (int i = 1; i < n; i++) {
        scanf("%d", &x);

        if (currentSum + x < x) {
            currentSum = x;
        } else {
            currentSum += x;
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%lld\n", maxSum);

    return 0;
}
