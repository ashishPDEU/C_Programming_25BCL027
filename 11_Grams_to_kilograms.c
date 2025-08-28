//GRAMS TO KILOGRAMS.
#include<stdio.h>
int main() {
    float grams,kilograms;
    printf("Enter the grams to be converted:");
    scanf("%f",&grams);

    kilograms=grams/1000;
    printf(" %f grams into kilograms is %f",grams,kilograms);
    return 0;

}
