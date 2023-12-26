// Design a C program to calculate the sum of the first 100 natural 
       numbers

#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= 100; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

