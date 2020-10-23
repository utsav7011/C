// roots of quadric equation
#include<stdio.h>
#include<math.h>
void main()
{
    int a=0,b=0,c=0;
    float d=0,d1=0,d2=0;

    printf("Enter the coefficient of x^2 =>");
    scanf("%d",&a);


    printf("Enter the coefficient of x =>");
    scanf("%d",&b);


    printf("Enter the constant =>");
    scanf("%d",&c);

    d=(b*b)-4*a*c;
    switch(d>0)
    {
    case 1:
        {
            d1=((-b)+sqrt(d))/(2*a);
            d2=((-b)+sqrt(d))/(2*a);
            printf("THE ROOTS OF THE QUATION (%d)x^2 + (%d)x + (%d) =0  is :- \n %0.2f and %0.2f", a,b,c,d1,d2);
        }break;
    case 0:
        {
            switch(d==0)
                {
                   case 1:
                    {
                        printf("=====THE ROOTS OF THE EQUATION ARE EQUAL ===== ");
                        d1=((-b)+sqrt(d))/(2*a);
                        d2=((-b)+sqrt(d))/(2*a);
                        printf("\n THE ROOTS OF THE QUATION (%d)x^2 + (%d)x + (%d) =0  is :- \n %0.2f and %0.2f", a,b,c,d1,d2);
                    }break;
                   case 0:
                    {
                        printf("THE ROOTS DO NOT EXIST");
                    }
                }
        }

    }


}
