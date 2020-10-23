#include<stdio.h>

void comm(int a);

void main()
{
    long int a;
    printf("enter the no =>");
    scanf("%ld",&a);
    comm(a);
}

void comm(int a)
{
    printf("the no with commas is => %d,%d", a/1000,a%1000);
    return;
}
