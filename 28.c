#include <stdio.h>
#include <math.h>

void findRoots(float a, float b, float c) {
    float discriminant, root1, root2;

    //discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else if (discriminant == 0) {
        printf("Roots are real and identical:\n");
    } 
    else {
        printf("Roots are complex and conjugates:\n");
    }
}

int main() {
    float a, b, c;

    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);
    findRoots(a, b, c);

    return 0;
}
