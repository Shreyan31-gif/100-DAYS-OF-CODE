
#include <stdio.h>

int main() {
    int a[100], n, i, j, previous;

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
        previous = -1;

        for (j = i - 1; j >= 0; j--) {
            if (a[j] > a[i]) {
                previous = a[j];
                break;
            }
        }

        printf("%d", previous);

        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
