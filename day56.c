
#include <stdio.h>

int main() {
    int a[100], n, i, j, next;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        next = -1;

        for (j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                next = a[j];
                break;
            }
        }

        printf("%d", next);

        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
