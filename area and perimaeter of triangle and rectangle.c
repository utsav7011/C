#include<stdio.h>
void main()
{
    int ch,ch1,ch2;
    float a,b,c,l,br,area,peri,s;
    int chh=0;

    while (chh==0)
    {
            printf("enter the choice \n 1. triangle \n 2. rectangle \n =>");
    scanf("%d", &ch);

    if (ch==1)
    {
        printf("\n enter the length of side 1 => ");
           scanf("%f", &a);

           printf("\n enter the length of side 2 => ");
           scanf("%f", &b);

           printf("\n enter the length of side 3 => ");
           scanf("%f", &c);

        printf("\n \n enter the choice \n 1. area \n 2. perimeter \n =>");
        scanf("%d", &ch1);

        if (ch1==1)
        {
            printf("AREA OF TRIANGLE");

           s=(a+b+c)/2;
           area=(s*(s-a)*(s-b)*(s-c));

           printf("the area of the triangle with sides %0.2f , %0.2f , %0.2f is => %0.2f", a,b,c,area);

        }

        if (ch1==2)
        {
            printf("\n \n ***********PERIMETER*********** \n \n ");

            peri= a+b+c;
            printf("the perimeter of the triangle with sides %0.2f , %0.2f , %0.2f is => %0.2f", a,b,c,peri);

        }


    }

    if (ch==2)
    {
        printf("\n enter the length of rectangle => ");
           scanf("%f", &l);

           printf("\n enter the breadth of rectangle => ");
           scanf("%f", &br);

           printf("\n \n enter the choice \n 1. area \n 2. perimeter \n =>");
           scanf("%d", &ch2);


           if (ch2==1)
        {
            printf("\n \n ***********AREA***********\n \n ");
            area=(l*br);

           printf("the area of the rectangle with sides %0.2f , %0.2f is => %0.2f", l,br,area);

        }

        if (ch2==2)
        {
            printf("\n \n ***********PERIMETER*********** \n \n ");

            peri= 2*(l+br);
            printf("the perimeter of the rectangle with sides %0.2f , %0.2f  is => %0.2f", l,br,peri);

            }
        }
            printf(" \n \n \n do you wannna cont. => ");
        scanf("%d", &chh);
    }


}
