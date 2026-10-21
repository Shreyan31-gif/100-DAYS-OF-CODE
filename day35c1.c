
#include <stdio.h>

int main() {
    int a[100], n, i, largest, second;
    int hasSecond = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];
    }

    for (i = 0; i < n; i++) {
        if (a[i] < largest) {
            if (!hasSecond || a[i] > second) {
                second = a[i];
                hasSecond = 1;
            }
        }
    }

    if (hasSecond)
        printf("Second largest = %d\n", second);
    else
        printf("No distinct second largest element\n");

    return 0;
}
