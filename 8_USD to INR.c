//conversion of Dollars into Rupees.
#include<stdio.h>
int main() {
    float dollar,rupees;
    printf("Enter dollars to be converted:");
    scanf("%f",&dollar);

    rupees=dollar*87;
    printf("The values of %f dollar in rupees is %f",dollar, rupees);
    return 0;

}
