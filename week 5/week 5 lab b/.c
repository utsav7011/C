#include<stdio.h>
void main()
{
    float cp,sp,p,l;

    printf("ENTER THE COST PRICE :- ");
    scanf("%f", &cp);

    printf("ENTER THE SELLING PRICE :- ");
    scanf("%f", &sp);

    if (sp>cp)
    {
        p=((sp-cp)/cp)*100;
        printf("the profit on the item is %0.2f ",p);
    }

    if (sp<cp)
    {
            p=(((sp-cp)/cp)*100)*(-1);
            printf("the loss on the item is %0.2f" , p);
    }


}
