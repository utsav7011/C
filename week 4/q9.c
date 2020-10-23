#include<stdio.h>
void main()
{
    int rs;
    printf("Enter the amount ");
    scanf ("%d",&rs);

    if (rs>500)
    {
            printf("\n no of Rs 500 notes required is  %d",rs/500);
            rs=rs%500;

    }

    if (rs>100)
    {
        printf(" \n no of Rs 100 notes required is %d",rs/100);
            rs=rs%100;
    }

    if (rs>50)
    {
        printf("\n no of Rs 50 notes required is %d",rs/50);
            rs=rs%50;
    }
    if (rs>20)
    {
        printf("\n no of Rs 20 notes required is %d",rs/20);
            rs=rs%20;
    }

    if (rs>10)
    {
        printf("\n no of Rs 10 notes required is %d",rs/10);
            rs=rs%10;
    }

     if (rs>5)
    {
        printf("\n no of Rs 5 coins required is %d",rs/5);
            rs=rs%5;
    }

    if (rs>2)
    {
        printf("\n no of Rs 2 coins required is %d",rs/2);
            rs=rs%2;
    }

    if (rs>1)
    {
        printf("\n no of Rs 1 coins required is %d",rs/1);
            rs=rs%1;
    }
}
