
#include <stdio.h>

int main() {
    int a[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;

    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
