
#include <stdio.h>

int main() {
    int a[100], n, i, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
