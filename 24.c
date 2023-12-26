#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

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

    int isEqual = 1; 

    for (int i = 0; i < size; i++) {
        if (array1[i] != array2[i]) {
            isEqual = 0; 
            break;        
        }
    }

    if (isEqual) {
        printf("The two arrays are equal.\n");
    } else {
        printf("The two arrays are not equal.\n");
    }

    return 0;
}
