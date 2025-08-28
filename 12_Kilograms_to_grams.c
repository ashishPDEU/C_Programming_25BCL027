#include<stdio.h>
int main() {
    float grams,kilogram;
    printf("Enter the kilogram to be converted:");
    scanf("%f",&kilogram);

    grams=kilogram*1000;
    printf(" %.2f kilograms into grams is %.2f",kilogram,grams);
    return 0;

}
