#include<stdio.h>
void main()
{
    int a,b,c,d,e,sum;
    a=b=c=d=e=sum=0;

    printf("Enter the no => ");
    scanf("%d",&a);

    printf("Enter the no => ");
    scanf("%d",&b);

    printf("Enter the no => ");
    scanf("%d",&c);

    printf("Enter the no => ");
    scanf("%d",&d);

    printf("Enter the no => ");
    scanf("%d",&e);

    sum=a+b+c+d+e;

    printf("the sum of %d + %d + %d + %d + %d = %d",a,b,c,d,e,sum);

}
