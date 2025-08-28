//DOLLARS TO POUNDS.
#include<stdio.h>
int main() {
    float dollars,rupees,pounds;
    printf("Enter dollars to be converted:");
    scanf("%f",&dollars);
    rupees=dollars*87;
    pounds=rupees/118.2;
    printf("The values of %f dollars int pounds is %f",dollars,pounds);
    return 0;

}
