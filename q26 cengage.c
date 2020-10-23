#include<stdio.h>
void main()
{
    float x=0,y=0,p=0,s=0,total=0;

    printf("enter the value of x => ");
    scanf("%f", &x);

    printf("enter the value of y => ");
    scanf("%f",&y);

    p=x*y;
    s=x+y;

    total = s*s + p * (s-x)*(p+y);

    printf("total value is  => %f" , total);


}
