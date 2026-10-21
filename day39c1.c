
#include <stdio.h>

int main() {
    int a[10][10], n, i, j, distinct = 1;

    printf("Enter order of matrix: ");
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
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (!distinct)
            break;
    }

    if (distinct)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");

    return 0;
}
