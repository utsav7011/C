#include<stdio.h>
void main()
{

    float d,r;

    printf("enter the angle in degrees");
    scanf("%f",&d);

    r=d*(3.14/180);

    printf("the angle of %0.1f(degrees)  in radians is :- %0.2f ",d,r);

}
