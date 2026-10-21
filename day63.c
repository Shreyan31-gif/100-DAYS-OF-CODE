
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main(void) {
    int n, k;

    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid input\n");
        return 0;
    }

    qsort(arr, n, sizeof(int), compare);

    printf("%d\n", arr[k - 1]);

    return 0;
}
