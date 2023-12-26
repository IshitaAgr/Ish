#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int bitwiseAND = num1 & num2;
    int bitwiseOR = num1 | num2;
    int bitwiseXOR = num1 ^ num2;
    printf("Bitwise AND: %d & %d = %d\n", num1, num2, bitwiseAND);
    printf("Bitwise OR: %d | %d = %d\n", num1, num2, bitwiseOR);
    printf("Bitwise XOR: %d ^ %d = %d\n", num1, num2, bitwiseXOR);

    return 0;
}
