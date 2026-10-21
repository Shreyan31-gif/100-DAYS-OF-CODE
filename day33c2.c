
#include <stdio.h>

int main() {
    int a[101], n, i, key, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n >= 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    i = n - 1;

    while (i >= 0 && a[i] > key) {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = key;
    n++;

    printf("Updated array: ");
    for (j = 0; j < n; j++) {
        printf("%d ", a[j]);
    }

    printf("\n");
    return 0;
}
