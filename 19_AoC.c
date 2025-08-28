#include <stdio.h>

int main() {
    float r, a;

    printf("Enter radius of the circle: ");
    scanf("%f", &r);

    a = 22/7* r * r;

    printf("Area of circle = %.2f\n", a);

    return 0;
}
