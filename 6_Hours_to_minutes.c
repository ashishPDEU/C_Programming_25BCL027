//conversion of hours into minutes
#include<stdio.h>
int main() {
    float hours,minutes;
    printf("Enter the number of hours:");
    scanf("%f",&hours);

    minutes=hours*60;
    printf("The given time in minutes is %f",minutes);
    return 0;

}
