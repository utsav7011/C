#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the no =>  ");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    printf("the rightmost digit is  %d", b);
    a=a%10;
    printf("\n the second rightmost digit is  %d", a);

}
