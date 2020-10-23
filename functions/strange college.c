#include<stdio.h>
#define regfees 10
#define unitfees 10
#define excessfees 50

int termfees(int units)
{
    int totalfees;
    totalfees=regfees+((units-1)/12*excessfees)+units*unitfees;

    return totalfees;
}

void calculationfees(int fterm, int sterm, int tterm)

{
    int fee;
    fee=(termfees(fterm))+(termfees(sterm))+(termfees(tterm));
    printf("total is ",fee);

}


void main(void)
{
    int firstterm, secondterm,thirdterm,totalfees;

    printf("enter the units in first term :  ");
    scanf("%d",&firstterm);


    printf("enter the units in second term :  ");
    scanf("%d",&secondterm);

    printf("enter the units in third term :  ");
    scanf("%d",&thirdterm);

    calculationfees(firstterm,secondterm,thirdterm);

}


