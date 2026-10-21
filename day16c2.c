
#include <stdio.h>

int main() {
    int n, original, digit, reverse = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Not a palindrome\n");
        return 0;
    }

    original = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
