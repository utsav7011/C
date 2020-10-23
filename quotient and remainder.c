#include<stdio.h>
void main()
{
    int a,b;
    float q,r=0;
    printf("enter the dividend");
    scanf("%d", &a);
    printf("\n enter the divisor");
    scanf("%d", &b);

    q = a/b;
     r = a%b;
    printf("\n \n the quotient of the division is %0.2f", q);

    printf("\n \n the remainder of the division is %0.2f", r);
}
