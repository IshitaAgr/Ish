#include <stdio.h>

int main() {
    int number, c = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The first 10 multiples of %d are:\n", number);
    do {
        printf("%d x %d = %d\n", number, c, number * c);
        c++;
    } while (c <= 10);

    return 0;
}
