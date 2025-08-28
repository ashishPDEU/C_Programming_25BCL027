#include <stdio.h>

int main() {
    float p, r, t, i;

    printf("Enter Principal amount: ");
    scanf("%f", &p);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    i = (p * r * t) / 100;

    printf("Simple Interest = %.2f\n", i);

    return 0;
}
