
#include <stdio.h>

int main() {
    int a[100], n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zeros = %d\n", zero);

    return 0;
}
