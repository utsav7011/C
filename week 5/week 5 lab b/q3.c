
#include<stdio.h>
void main()
{
    int m,p,c,t,t1;

    printf("Enter the marks in Maths :- ");
    scanf("%d",&m);

    printf("Enter the marks in Physics :- ");
    scanf("%d",&p);

    printf("Enter the marks in Chnistry :- ");
    scanf("%d",&c);

    t=m+p+c;
    if (m>=60)
    {
        if (p>=55)
        {
            if (c>=50)
            {
                if (t>=180)
                {
                    printf("You are Eligible");
                }
                else if ((m+p+t)>=140)
                    printf("You are Eligible");
            }
            else
            {
                printf("You are not Eligible");
                exit(0);
            }
        }
        else
            {
                printf("You are not Eligible");
                exit(0);
            }

    }
    else
            {
                printf("You are not Eligible");
                exit(0);
            }

}
