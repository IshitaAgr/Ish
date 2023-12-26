#include <stdio.h>

float divide(float a, float b) {

    if (b == 0) {
        printf("Error: Division by zero is undefined.\n");
        return 0;
    }

    return a / b;
}

int main() {
    float num1, num2, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    result = divide(num1, num2);

    printf("Result of division: %.2f\n", result);

    return 0;
}
