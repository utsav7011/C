#include<stdio.h>

int termfees(int units)
{
    int totalfees=0;
    int regfees=10,excessfees=50,unitfees=10;
    totalfees=regfees+((units-1)/12*excessfees)+units*unitfees;
    return totalfees;
};

int calculationfees(int fterm, int sterm, int tterm)

{
    int fee=0,fee1=0,fee2=0,fee3=0;
    fee1=termfees(fterm);
    fee2=termfees(sterm);
    fee3=termfees(tterm);
    fee=fee1+fee2+fee3;
    return fee;
};


void main()
{
    int firstterm, secondterm,thirdterm,totalfees;

    printf("enter the units in first term :  ");
    scanf("%d",&firstterm);

    printf("enter the units in second term :  ");
    scanf("%d",&secondterm);

    printf("enter the units in third term :  ");
    scanf("%d",&thirdterm);

    totalfees = calculationfees(firstterm,secondterm,thirdterm);
    printf ("\n \n the value of fees is %d ", totalfees);
}


