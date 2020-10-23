#include<stdio.h>
void main()
{
    float R=0,vol=0,r=0,vol1=0;
    int n;

    printf("the radius of the ball is => ");
    scanf("%f",&R);

    vol=(4/3)*3.14*(R*R*R);
    printf("\n the volume of the Spherical ball of radius %0.2f is => %0.2f ",R,vol);
    r=0.25*R;
    vol1=(4/3)*3.14*(r*r*r);
    printf("\n the volume of the Spherical ball of radius %0.2f is => %0.2f ",r,vol1);
    n=vol/vol1;
    printf("\n No of balls that can be  formed are => %d", n);
}
