#include<stdio.h>
void main()
{
    float f=0,c=0;
    int a;
    printf("Enter the temp in degree celcius => ");
    scanf("%f",&c);

    f=((c*9)/5)+32;
    a=f;
    printf("\n the temp in integer value => %d",a);
    printf("\n the temp in integer value => %6d",a);
    printf("\n the temp in integer value => %f",f);
    printf("\n the temp in integer value => %6f",f);
    printf("\n the temp in integer value => %0.2f",f);
    printf("\n the temp in integer value => %6.2f",f);
}
