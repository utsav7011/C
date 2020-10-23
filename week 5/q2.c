#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the first no");
    scanf("%d",&a);

    printf("enter the first no");
    scanf("%d",&b);

    printf("enter the first no");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        if (b>c)
        {
            printf("the nos in ascending order are :- %d < %d < %d ", c,b,a);
        }

        else if (b<c)
        {
            printf("the nos in ascending order are :- %d < %d < %d ", b,c,a);
        }
        else if (b==c)
        {
            printf("the nos in ascending order are :- %d = %d < %d ", b,c,a);
        }

        else if (a==b==c)
            printf("all the 3 nos are equal");

    }
    else if (b>a && b>c)
    {
        if (a>c)
        {
            printf("the nos in ascending order are :- %d < %d < %d ", c,a,b);
        }

        if (a<c)
        {
            printf("the nos in ascending order are :- %d < %d < %d ", a,c,b);
        }

        else if (a==c)
        {
            printf("the nos in ascending order are :- %d = %d < %d ", a,c,b);
        }
        else if (a==b==c)
            printf("all the 3 nos are equal");
    }
    else if (c>a && c>b)
    {
        if (a>b)
        {
            printf("the nos in ascending order are :- %d < %d < %d ", b,a,c);
        }

        if (a<b)
        {
            printf("the nos in ascending order are :- %d < %d < %d ", a,b,c);
        }

        else if (a==b)
        {
            printf("the nos in ascending order are :- %d = %d < %d ", a,b,c);
        }

        else if (a==b==c)
            printf("all the 3 nos are equal");

    }
}
