#include<stdio.h>
void main()
{
    int q,rt;
    float tax,t,gt;

    printf("enter the no of items sold  :- ");
    scanf ("%d",&q);

    printf("enter the rate of item sold  :- ");
    scanf ("%d",&rt);

    printf("enter the tax on items sold  :- ");
    scanf ("%f",&tax);

    t=q*rt;

    printf("\n the total taxable amount is %0.2f =>",t);

    tax=tax*t;

    printf("\n \n the total tax to be paid is %0.2f => ",tax);

    gt=t+tax;

    printf("\n \n the total total amount is %0.2f=> ",gt);

}
