
#include <stdio.h>

int main() {
    int a[100], n, target, i;
    int first = -1, last = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("-1 -1\n");
        return 0;
    }

    printf("Enter sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d %d\n", first, last);

    return 0;
}
