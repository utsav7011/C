#include<stdio.h>

void sum (int a , int b);

void main()
{
    int a,b;
    printf("enter the first no =>");
    scanf("%d",&a);

    printf("enter the second no =>");
    scanf("%d",&b);

    sum(a,b);

}

void sum(int a,int b)
{
    int sum;
    sum=a+b;
    printf("\n the sum of %d and %d is => %d ", a,b,sum);
}
