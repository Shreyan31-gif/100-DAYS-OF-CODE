
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }

        if (i < 5) {
            printf("\n");
        }
    }

    return 0;
}
