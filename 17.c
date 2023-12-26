#include <stdio.h>

int main() {
    int number, counter = 1;
    unsigned long long factorial = 1;  

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
    
        do {
            factorial *= counter;
            counter++;
        } while (counter <= number);
        printf("Factorial of %d is %llu\n", number, factorial);
    }

    return 0;
}
