#include<math.h>
#include<stdio.h>
void main()
{
    int no=0 ,n=0,i=0,j=0;
    printf("Enter the no => ");
    scanf("%d", &no);
    int num1=no,a1=0,rev=0;

    while(no>0)
    {

        a1=no%10;
        rev=(rev*10)+a1;
        no=no/10;

    }

    while (rev>0)
    {
        n=rev%10;
        rev=rev/10;
        if (n==1)
            printf(" One");

        if (n==0)
            printf(" Zero");

        if (n==2)
            printf(" Two");

        if (n==3)
            printf(" Three");

        if (n==4)
            printf(" Four");

        if (n==5)
            printf(" Five");

        if (n==6)
            printf(" Six");

        if (n==7)
            printf(" Seven");

        if (n==8)
            printf(" Eight");

        if (n==9)
            printf(" Nine");

    }
}
