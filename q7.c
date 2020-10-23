#include<stdio.h>
void main()
{
    int hr,min,c,tot;
    printf("Enter the choice\n1) to enter in 24 hr format \n2)  to enter in 12 hr format \n=>");
    scanf("%d",&c);

    if (c==1)
    {
        printf("Enter the hr part of time => ");
        scanf("%d",&hr);
        if (hr<0 || hr >23)
        {
            printf("\n invalid input");
            exit (0);
        }

        printf("Enter the min part of time => ");
        scanf("%d",&min);

        if (min<0 ||min>69)
            {
                printf("\n invalid input");
                exit(0);
            }
        printf("the time entered is => %d : %d",hr,min);

        tot=60*hr+min;
        printf("the time in min is => %d", tot);
    }

    if (c==2)
    {
        printf("Enter the hr part of time => ");
        scanf("%d",&hr);
        if (hr<0||hr>12)
        {
            printf("Invalid input");
            exit (0);
        }
        printf("Enter the min part of time => ");
        scanf("%d",&min);
        if (min<0||min>59)
        {
            printf("invlaid input");
        }
        printf("the time entered is => %d : %d",hr,min);
        tot=60*hr+min;
        printf("the time in min is => %d", tot);
    }
}
