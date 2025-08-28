#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter your First Number : ");
    scanf("%d",&a);
    printf("Enter your Second Number : ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("After swapping the numbers :\nFirst number : %d \nSecond number : %d",a,b);

    return 0;

}
