#include <stdio.h>

int main(){
    int start, end;

    printf("Enter the starting and ending values of the range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers in the range %d to %d are:\n", start, end);

    for (int i = start; i <= end; ++i) {
        if (i <= 1) {
            continue;  // Skip 01
        }

        // Check for from 2 to i-1
        int isPrime = 1;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                isPrime = 0;  //not
                break;
            }
        }

        // Print prime numbers
        if (isPrime) {
            printf("%d\n", i);
        }
    }

    return 0;
}
