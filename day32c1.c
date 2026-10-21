
#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n, m, i;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter first array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    if (m < 1 || m > 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter second array elements: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
        c[n + i] = b[i];
    }

    printf("Merged array: ");
    for (i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");
    return 0;
}
