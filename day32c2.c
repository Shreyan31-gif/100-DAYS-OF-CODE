
#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, i, max = 0;

    printf("Enter a non-negative integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Invalid number\n");
        return 0;
    }

    do {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    } while (n > 0);

    for (i = 0; i < 10; i++) {
        if (freq[i] > max)
            max = freq[i];
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] == max)
            printf("Digit %d occurs %d times\n", i, max);
    }

    return 0;
}
