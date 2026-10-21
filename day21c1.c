
#include <stdio.h>

int main() {
    int n, first, last, temp, place = 1, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive integer\n");
        return 0;
    }

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;

    if (place == 1) {
        result = n;
    } else {
        result = last * place + (n % place) / 10 * 10
                 + first;
        result = last * place + (n % place - last)
                 + first;
    }

    printf("Number after swapping = %d\n", result);

    return 0;
}
