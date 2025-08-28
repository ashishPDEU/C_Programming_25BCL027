//conversion of minutes into hours
#include<stdio.h>
int main() {
    float minutes,hours;
    printf("Enter the minutes to be converted:");
    scanf("%f",&minutes);

    hours=minutes/60;
    printf("The given time in hours is %f",hours);
    return 0;

}
