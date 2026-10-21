
#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
