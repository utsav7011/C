#include<stdio.h>
void scoretograde(int m);

void main()
{
    int m;

    printf("enter the marks obtained");
    scanf("%d",&m);

    scoretograde(m);
}

void scoretograde (int m)
{
    int temp;
    char grade;
    temp=m/10;

    switch(temp)
    {
        case 10:
        case 9: grade='A';break;
        case 8:
        case 7: grade='B';break;
        case 6:
        case 5: grade='C';break;
        default : grade='C';break;
        }
    printf("\n the grades per marks is %c",grade);
}

