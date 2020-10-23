#include<stdio.h>
void main()
{
    float a=0,b=0;
    printf("enter the first no");
    scanf("%f",&a);

    printf("enter the second no");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("the value of a is %f",a);
    printf("the value of a is %f",b);
}
