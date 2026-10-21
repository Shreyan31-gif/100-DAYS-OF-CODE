
#include <stdio.h>

int main() {
    char a[200], b[200];
    int count[256] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    scanf("%199s", a);

    printf("Enter second string: ");
    scanf("%199s", b);

    for (i = 0; a[i] != '\0'; i++)
        count[(unsigned char)a[i]]++;

    for (i = 0; b[i] != '\0'; i++)
        count[(unsigned char)b[i]]--;

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Strings are anagrams\n");
    else
        printf("Strings are not anagrams\n");

    return 0;
}
