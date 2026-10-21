
#include <stdio.h>

int main() {
    int a[101], n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n >= 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position and value: ");
    scanf("%d %d", &pos, &value);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = value;
    n++;

    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
