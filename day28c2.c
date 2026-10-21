
#include <stdio.h>

int main() {
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
