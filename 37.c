#include<stdio.h>

int main() {
 
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Compare the two numbers using relational operators
    printf("\nComparison Results:\n");

    printf("%d == %d is %s\n", num1, num2, num1 == num2 ? "true" : "false");
    printf("%d != %d is %s\n", num1, num2, num1 != num2 ? "true" : "false");
    printf("%d <  %d is %s\n", num1, num2, num1 < num2 ? "true" : "false");
    printf("%d >  %d is %s\n", num1, num2, num1 > num2 ? "true" : "false");
    printf("%d <= %d is %s\n", num1, num2, num1 <= num2 ? "true" : "false");
    printf("%d >= %d is %s\n", num1, num2, num1 >= num2 ? "true" : "false");

    return 0;
}
