#include <stdio.h>
#include <math.h>
struct Point {
    float x;
    float y;
};

int main() {
    struct Point p1, p2;
    printf("Enter coordinates for the first point (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter coordinates for the second point (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    float distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("Distance between the points: %.2f\n", distance);

    return 0;
}
