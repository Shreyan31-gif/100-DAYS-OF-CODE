
#include <stdio.h>

int main(void) {
    int n, k;

    scanf("%d", &n);

    int arr[n > 0 ? n : 1];
    int q[n > 0 ? n : 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (n <= 0 || k <= 0 || k > n) {
        printf("Invalid input\n");
        return 0;
    }

    int front = 0, rear = 0;

    for (int i = 0; i < n; i++) {
        /* Remove negative elements outside the window */
        while (front < rear && q[front] <= i - k) {
            front++;
        }

        /* Store the current negative element's index */
        if (arr[i] < 0) {
            q[rear++] = i;
        }

        if (i >= k - 1) {
            if (i > k - 1) {
                printf(" ");
            }

            if (front < rear) {
                printf("%d", arr[q[front]]);
            } else {
                printf("0");
            }
        }
    }

    printf("\n");
    return 0;
}
