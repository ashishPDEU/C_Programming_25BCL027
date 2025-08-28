#include <stdio.h>

int main() {
    float s, n;

    printf("Enter your Gross Sales : ");
    scanf("%f", &s);

    n = s - 0.1*s;

    printf("Your Net Sale is = %.3f\n", n);

    return 0;
}
