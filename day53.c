
#include <stdio.h>

int main() {
    int a[100], n, i, total = 0, left = 0;
    int pivot = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("-1\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for (i = 0; i < n; i++) {
        if (left == total - left - a[i]) {
            pivot = i;
            break;
        }
        left += a[i];
    }

    printf("%d\n", pivot);
    return 0;
}
