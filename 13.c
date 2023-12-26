#include <stdio.h>

int main() {
    int number, count = 0, sum = 0;

    printf("Enter numbers (enter 0 to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        sum += number;
        count++;
    }

    if (count > 0) {

        double avg = (double)sum / count;
        printf("Average of the entered numbers: %.2f\n", avg);
    } 
    else {
        printf("No numbers were entered.\n");
    }

    return 0;
}
