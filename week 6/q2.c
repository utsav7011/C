
#include<stdio.h>
void main()
{
    int sum,dif,pro,q,r,a,b,c;
    printf("Enter the no");
    scanf("%d", &a);

    printf("Enter the no");
    scanf("%d", &b);

    printf("1. for addition\n2. for subtraction \n3. for multiplication \n4.division \n=>");
    scanf("%d",&c);

    switch(c)
    {
        case 1:
            {
                sum=a+b;
                printf("sum of %d and %d is %d",a,b, sum);
            } break;
        case 2:
            {
                dif=a-b;
                printf("difference of %d and %d is %d",a,b, dif);
            }break;
        case 3:
            {
                pro=a*b;
                printf("product of %d and %d is %d",a,b,pro);
            }break;
        case 4:
            {
                q=a/b;
                r=a%b;
                printf("quotient of %d divided by %d is %d",a,b,q);
                printf("remainder of %d divided by %d is %d",a,b,r);
            }break;
            default : "Wrong choice Entered";
    }

}
