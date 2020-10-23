#include<stdio.h>
int main()
{
    float a,b,c,f,e,d,r;

    printf("enter the values");
    printf("\n enter the first value ");
    scanf("%f",&a);

    printf("\n enter the second value (value of second one < first one)");
    scanf("%f",&b);

    c=a+b;
    printf("\n \n the sum of %0.1f and %0.1f is %0.1f",a,b,c);

    d=a-b;
    printf("\n \n the difference of %0.1f and %0.1f is %0.1f",a,b,d);

    e=a*b;
    printf(" \n \n the product of %0.1f and %0.1f is %0.1f",a,b,c);

    f=a/b;

    printf("\n \n the quotient of %0.1f devided by %0.1f is %0.1f",a,b,f);





    return 0;
}
