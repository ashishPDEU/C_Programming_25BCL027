#include <stdio.h>

int main() {
    float l, w, a, p;

    printf("Enter length of the rectangle: ");
    scanf("%f", &l);

    printf("Enter width of the rectangle: ");
    scanf("%f", &w);

    a = l * w;
    p = 2 * (l + w);

    printf("Area of rectangle = %.2f\n", a);
    printf("Perimeter of rectangle = %.2f\n", p);

    return 0;
}
