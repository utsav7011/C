#include<stdio.h>

void main()
{
    long  int inc;
    float tax;
    printf("enter the income in integers");
    scanf("%ld", &inc);

    if (inc <= 1000)
    {
        printf("the tax on the basis of the income is :- Rs. 0" );
    }

    else if (inc >1000 &&  inc<=10000)
    {
        tax=0.02*inc;
        printf("the tax on the basis of the income is :- Rs. %0.2f", tax);
    }

    else if (inc>10000&&inc <=20000)
    {
        tax=(10000*0.02)+(inc-10000)*0.05;
        printf("the tax on the basis of the income is :- Rs. %0.2f" ,tax);
    }
    else if (inc>20000)
    {
        tax= (10000*0.02) + (10000)*0.05 + (inc-30000)*0.07;
        printf("the tax on the basis of the income is :- Rs. %0.2f" ,tax);
    }



}
