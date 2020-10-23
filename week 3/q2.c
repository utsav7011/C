#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the values");
    printf("\n enter the first value");
    scanf("%f",&a);

    printf("\n enter the second value");
    scanf("%f",&b);
    c=a+b;

    printf("the sum of %0.1f and %0.1f is %0.1f",a,b,c);
    return 0;
}
