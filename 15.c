#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } 
        else {
            num2 -= num1;
        }
    }
    printf("The Greatest Common Divisor (GCD) is: %d\n", num1);
    return 0;
}
