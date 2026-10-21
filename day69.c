
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    int nums[n];
    int max = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    int *freq = calloc((size_t)max + 1, sizeof(int));

    if (freq == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;

        if (freq[nums[i]] == 2) {
            printf("%d\n", nums[i]);
            free(freq);
            return 0;
        }
    }

    free(freq);
    return 0;
}
