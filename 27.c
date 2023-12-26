#include <stdio.h>

// Function
float calculateRectangleArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width;   
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Call the function
    float area = calculateRectangleArea(length, width);
    printf("The area of the rectangle with length %.2f and width %.2f is %.2f square units.\n", length, width, area);

    return 0;
}
