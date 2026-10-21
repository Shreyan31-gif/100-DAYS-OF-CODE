
#include <stdio.h>

int main() {
    int a[100], n, i, j, count, majority = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("-1\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > n / 2) {
            majority = a[i];
            break;
        }
    }

    printf("%d\n", majority);
    return 0;
}
