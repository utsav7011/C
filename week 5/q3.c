#include<stdio.h>
void main()
{
    int a,b,c;

    printf("enter the length of first side:- ");
    scanf("%d",&a);

    printf("enter the length of second side:- ");
    scanf("%d",&b);

    printf("enter the length of third side :- ");
    scanf("%d",&c);

    if (a+b>c && b+c>a && a+c>b)
    {
        printf("the triangle is valid");
    }
    else printf("the triangle is not valid");
}
