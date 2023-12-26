#include <stdio.h>

float multiply(float a, float b) {
    return a * b;
}

int main() {
    float num1, num2, result;

    
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    result = multiply(num1, num2);

    // Display the result
    printf("Result of multiplication: %.2f\n", result);

    return 0;
}
