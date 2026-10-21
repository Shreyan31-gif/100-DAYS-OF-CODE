
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000005];

    scanf("%1000000s", s);

    int lastSeen[256];

    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int left = 0;
    int maxLength = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char ch = (unsigned char)s[right];

        if (lastSeen[ch] >= left) {
            left = lastSeen[ch] + 1;
        }

        lastSeen[ch] = right;

        int length = right - left + 1;

        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
