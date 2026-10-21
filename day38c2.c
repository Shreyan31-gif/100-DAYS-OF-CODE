
#include <stdio.h>

int main() {
    int a[10][10], n, i, j, symmetric = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid matrix size\n");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }

        if (!symmetric)
            break;
    }

    if (symmetric)
        printf("Symmetric matrix\n");
    else
        printf("Not a symmetric matrix\n");

    return 0;
}
