#include<stdio.h>
void main()
{
    int a,b,c,d,n=0;
    printf("enter a 3 digit no :- ");
    scanf("%d",&n);

 a=n%10;
 n=n/10;
 b=n%10;
 n=n/10;
 c=n%10;

 n=(a*100)+(b*10)+c;
 printf("\n  the reversed no is :- %d",n);

}
