#include<stdio.h>
void main()
{
    int a,b;
    printf ("enter a no ");
    scanf("%d", &a);

    printf ("enter another no ");
    scanf("%d", &b);

    if (a>b)
    printf("%d is greater than %d", a,b);

    else printf("%d is greater than %d", b,a);
}
