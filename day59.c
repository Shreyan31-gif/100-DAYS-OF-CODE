
#include <stdio.h>
#include <limits.h>

int main(void) {
    int n, k;

    scanf("%d", &n);

    int arr[n > 0 ? n : 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (n <= 0 || k <= 0 || k > n) {
        printf("Invalid input\n");
        return 0;
    }

    long long sum = 0;

    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    long long maxSum = sum;

    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%lld\n", maxSum);

    return 0;
}
