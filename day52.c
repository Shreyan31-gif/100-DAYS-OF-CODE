
#include <stdio.h>

int main() {
    int a[100], n, x, i, index = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("-1\n");
        return 0;
    }

    printf("Enter sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] >= x) {
            index = i;
            break;
        }
    }

    printf("%d\n", index);

    return 0;
}
