#include<stdio.h>
void main()
{
    int a,b,c,d;
    float avg;

    printf("the first no is ");
    scanf("%d",&a);

    printf("\n the first no is ");
    scanf("%d",&b);

    printf("\n the first no is ");
    scanf("%d",&c);

    printf("\n the first no is ");
    scanf("%d",&d);

    avg=(float) ((a+b+c+d)/4);

    printf("the average of the nos is %0.2f",avg);
}
