#include<stdio.h>
void main()
{
    int units;
    float tot;;
    printf("Enter the no of units:- ");
    scanf("%d",&units);

    if (units<=50)
    {
        tot=0.5*units;
        tot=tot+0.2*tot;
        printf("the total bill is :-  %0.2f",tot);
    }
    if (units>50 && units<=150)
    {
        tot=(0.5*50)+(0.75*(units-50));
        tot=tot+0.2*tot;
        printf("the total bill is :- %0.2f ",tot );
    }

    if (units>150 && units<=250)
    {
        tot=0.5*50+0.75*100+1.30*(units-150);
        tot=tot+tot*0.2;
        printf("the total bill is :- %0.2f ",tot );
    }

    if (units>250)
    {
        tot=0.5*50+0.75*100+1.30*100+1.50*(units-250);
        tot=tot+tot*0.2;
        printf("the total bill is :- %0.2f ",tot);
    }

}
