//All Four Operations
#include<stdio.h>
int main() {
    float a,b,q,p,d,s;
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    printf("Enter the value of b:\n");
    scanf("%f",&b);
    q=a/b;
    p=a*b;
    s=a+b;
    d=a-b;
    printf("quotient of a and b is:%f\n",q);
    printf("product of a and b is:%f\n",p);
    printf("sum of a and b is:%f\n",s);
    printf("difference of a and b is:%f\n",d);
    return 0;

}
