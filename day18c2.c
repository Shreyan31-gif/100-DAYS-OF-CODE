
#include <stdio.h>

int main() {
    int a, b, i, hcf = 1;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Enter positive integers\n");
        return 0;
    }

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF = %d\n", hcf);

    return 0;
}
