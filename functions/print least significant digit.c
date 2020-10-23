#include<stdio.h>
void printdigit(int x)
{
    x=x%10;
    printf("\nthe least significant digit is %d", x);
}

void main()
{
    int a ;
    printf("enter an integer => " );
    scanf("%d",&a);
    printdigit(a);

}

