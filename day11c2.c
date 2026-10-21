
#include <stdio.h>

int main() {
    float cp, sp, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (cp <= 0) {
        printf("Invalid cost price\n");
    } else if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f\n", sp - cp);
        printf("Profit percentage = %.2f%%\n", percentage);
    } else if (sp < cp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f\n", cp - sp);
        printf("Loss percentage = %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}
