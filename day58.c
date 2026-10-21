
#include <stdio.h>

int main() {
    int nums[100], answer[100];
    int n, i, prefix = 1, suffix = 1;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("Output array: ");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if (i < n - 1)
            printf(" ");
    }

    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int nums[100], answer[100];
    int n, i, prefix = 1, suffix = 1;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("Output array: ");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if (i < n - 1)
            printf(" ");
    }

    printf("\n");
    return 0;
}
