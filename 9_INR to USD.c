//conversion of Rupees into dollars.
#include<stdio.h>
int main() {
    float rupees,dollars;
    printf("Enter rupees to be converted:");
    scanf("%f",&rupees);

    dollars=rupees/87;
    printf("The values of %f rupees into dollars is %f",rupees,dollars);
    return 0;

}
