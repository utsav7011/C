#include<stdio.h>
void main()
{
    int n=0,sum=0,num=0,i=0,num1;
    printf("Enter the no => ");
    scanf("%d", &n);
    num1=n;
    while (i<5)
    {
        num=n%10;
        if (i==0||i==4)
        {
            sum=sum+num;
        }
        n=n/10;
        i++;
    }
    printf("THE SUM OF FIRST AND LAST DIGIT OF %d is %d",num1,sum);
}
