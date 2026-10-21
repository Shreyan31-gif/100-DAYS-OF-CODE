
#include <stdio.h>

int main(void) {
    int m, n;

    scanf("%d", &m);

    if (m < 0) {
        printf("Invalid input\n");
        return 0;
    }

    int a[m > 0 ? m : 1];

    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input\n");
        return 0;
    }

    int b[n > 0 ? n : 1];
    int merged[m + n > 0 ? m + n : 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0, p = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[p++] = a[i++];
        } else {
            merged[p++] = b[j++];
        }
    }

    while (i < m) {
        merged[p++] = a[i++];
    }

    while (j < n) {
        merged[p++] = b[j++];
    }

    for (int x = 0; x < p; x++) {
        if (x > 0) {
            printf(" ");
        }
        printf("%d", merged[x]);
    }

    printf("\n");

    return 0;
}
