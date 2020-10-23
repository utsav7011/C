
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

    if (a==b&&b==c&&c==a)
        printf("the triangle is an equilateral triangle ");

    else if (a==b||a==c||b==c)
        printf("the triangle is an isosceles triangle");

    else if (a!=b!=c)
        printf("the triangle is a scalene triangle ");
}
