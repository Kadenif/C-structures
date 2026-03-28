#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point p;

    printf("Enter x: ");
    scanf("%f", &p.x);

    printf("Enter y: ");
    scanf("%f", &p.y);

    float distance = sqrt(p.x * p.x + p.y * p.y);

    printf("Distance from origin: %.2f\n", distance);

    return 0;
}
