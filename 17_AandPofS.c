#include <stdio.h>

int main() {
    float l, a, p;

    printf("Enter side of the square: ");
    scanf("%f", &l);

    a = l * l;
    p = 4 * l;

    printf("Area of square = %.2f square units\n", a);
    printf("Perimeter of square = %.2f units\n", p);

    return 0;
}
