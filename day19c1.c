
#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Enter positive integers\n");
        return 0;
    }

    lcm = (a > b) ? a : b;

    while (lcm % a != 0 || lcm % b != 0) {
        lcm++;
    }

    printf("LCM = %d\n", lcm);

    return 0;
}
