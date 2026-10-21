
#include <stdio.h>

int main(void) {
    int n, k;

    scanf("%d", &n);

    int arr[n > 0 ? n : 1];
    int dq[n > 0 ? n : 1];

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
        /* Remove indices outside the window */
        while (front < rear && dq[front] <= i - k) {
            front++;
        }

        /* Remove smaller elements from the back */
        while (front < rear &&
               arr[dq[rear - 1]] <= arr[i]) {
            rear--;
        }

        dq[rear++] = i;

        /* Print maximum after forming a full window */
        if (i >= k - 1) {
            if (i > k - 1) {
                printf(" ");
            }
            printf("%d", arr[dq[front]]);
        }
    }

    printf("\n");
    return 0;
}
