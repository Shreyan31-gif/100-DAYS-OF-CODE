
#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4)
        printf("%02d-Apr-%04d\n", day, year);
    else
        printf("This program supports April only\n");

    return 0;
}
