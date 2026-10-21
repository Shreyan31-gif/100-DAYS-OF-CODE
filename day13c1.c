
#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;
        case '-':
            printf("Result = %.2f\n", a - b);
            break;
        case '*':
            printf("Result = %.2f\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero is not possible\n");
            break;
        case '%':
            if (b != 0)
                printf("Result = %d\n", (int)a % (int)b);
            else
                printf("Modulo by zero is not possible\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
