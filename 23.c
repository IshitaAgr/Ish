#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], resultArray[size];
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < size; i++) {
        resultArray[i] = array1[i] * array2[i];
    }

    printf("Resultant array after multiplication:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", resultArray[i]);
    }
    printf("\n");

    return 0;
}
