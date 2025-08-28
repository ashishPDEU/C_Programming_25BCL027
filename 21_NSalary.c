#include <stdio.h>

int main() {
    float s, n;

    printf("Enter your salary : ");
    scanf("%f", &s);

    n = s + 0.1*s - 0.03*s;

    printf("Your net salary is = %.3f\n", n);

    return 0;
}
