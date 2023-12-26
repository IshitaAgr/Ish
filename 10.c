#include <stdio.h>

int main() {
    
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = (n * (n + 1) * ((2 * n) + 1)) / 6;

    printf("The sum of the series 1^2 + 2^2 + 3^2 + ... + %d^2 is %d\n", n, sum);

    return 0;
}
