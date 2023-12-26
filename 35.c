#include<stdio.h>

struct Triangle {
    float base;
    float height;
};

int main() {
    struct Triangle t1;

    printf("Enter the base of the triangle: ");
    scanf("%f", &t1.base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &t1.height);

    float area = 0.5 * t1.base * t1.height;
    printf("The area of the triangle with base %.2f and height %.2f is %.2f\n", t1.base, t1.height, area);

    return 0;
}
