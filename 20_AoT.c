#include <stdio.h>

int main() {
    float b, h, a;

    printf("Enter base of the triangle: ");
    scanf("%f", &b);

    printf("Enter height of the triangle: ");
    scanf("%f", &h);

    a =  b * h/2;

    printf("Area of triangle = %.2f\n", a);

    return 0;
}
