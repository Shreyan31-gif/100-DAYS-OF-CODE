
#include <stdio.h>

int main(void) {
    int n, target;

    scanf("%d", &n);

    if (n <= 0) {
        printf("-1 -1\n");
        return 0;
    }

    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((long long)nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");

    return 0;
}
