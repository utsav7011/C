#include<stdio.h>
int main()
{
    float a,r;
    printf("\n enter the value of radius of circle");
    scanf("%f",&r);
    a=3.14*(r*r);

    printf("the area of circle of radius %0.2f is %0.2f",r,a);
    return 0;
}
