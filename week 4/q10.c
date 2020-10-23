#include<stdio.h>
void main()
{
    float sal,total, hra,da;
    printf("enter the basic salary => ");
    scanf("%f", &sal);

    if (sal<=10000)
    {
        hra=sal*0.2;
        da=sal*0.8;
        total = sal+hra+da;
        printf("\n the Basic Salary is  %0.2f", sal);
        printf("\n the HRA is  %0.2f", hra);
        printf("\n the DA is  %0.2f", da);
    }

    if (sal>=10000 && sal <20000)
    {
        hra=sal*0.25;
        da=sal*0.90;

        total = sal+hra+da;
        printf("\n the Basic Salary is  %0.2f", sal);
        printf("\n the HRA is  %0.2f", hra);
        printf("\n the DA is  %0.2f", da);
    }

    if (sal>=20000)
    {
        hra=sal*0.3;
        da=sal*0.95;

        total = sal+hra+da;
        printf("\n the Basic Salary is  %0.2f", sal);
        printf("\n the HRA is  %0.2f", hra);
        printf("\n the DA is  %0.2f", da);
    }
}
