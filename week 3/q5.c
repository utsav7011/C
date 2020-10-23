#include<stdio.h>
void main()
{
    float d1,a,q,r;

    printf("enter the value of dividend");
    scanf("%f",&d1);

    printf("/n enter the value of divisor");
    scanf("%f",&a);

    q=d1/a;

    printf("\n \n the quotient of %f devided by %f is %f",d1,a,q);

    r=d1-(a*q);

    printf("\n \n the remainder of %f devided by %f is %f",d1,a,r);

}
