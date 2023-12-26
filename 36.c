#include<stdio.h>

int main() {
    float num1, num2;
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform arithmetic operations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;

    // Check if the second number is not zero before performing division
    if (num2 != 0) 
    {
        float quotient = num1 / num2;
        printf("Sum: %.2f\n", sum);
        printf("Difference: %.2f\n", difference);
        printf("Product: %.2f\n", product);
        printf("Quotient: %.2f\n", quotient);
    } 
    else
    {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
