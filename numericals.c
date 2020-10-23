#include<stdio.h>
void main()
{
    float x;
    x=6.2+5.1*3.2;
    printf("%f",x);


    x=2.0+3.0/1.2;
    printf("\n %f",x);

    x=4*(3.0+2.0/6.0);
    printf("\n %0.2f",x);

    x=6.0/(2.0+4.0*1.2);
    printf("\n %f",x);

    x=2.7+3.2-5.3*1.1;
    printf("\n %f",x);

    int x1=2,y=3,z=2,a;
    a=x1-- + x1-- - y--;
    printf("\n %d",a);

    a=x +y-- - x + x++ - --y;
    printf("\n %d",a);

    x1=2;
    y=3;
    z=1;
    a= x+2/6+y;
    printf("\n %d",a);

    a=y-3*z+2;
    printf("\n %d",a);

    a= z -  (x1+z) % 2 + 4;
    printf("\n %d",a);

    a=x - 2 * (3+z)+y;
    printf("\n %d",a);

    a= y++ + z-- + x1++;
    printf("\n %d",a);

    x1=2945;

    a=x1%10;
    printf("\n %d",a);

    a=x1/10;
    printf("\n %d",a);

    a=(x1/10)%10;
    printf("\n %d",a);

    a= x1/100;
    printf("\n %d",a);

    a= (x1/100)%10;
    printf("\n %d",a);

    int b;

    a=b=50;
    printf("\n %4d %4d",a,b);

    a=a*2;
    b=b/2;

    printf("\n %4d %4d",a,b);






}
