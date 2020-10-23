#include<stdio.h>
void main()
{
    int a,b,c;
    printf ("enter a no ");
    scanf("%d", &a);

    printf ("enter a no ");
    scanf("%d", &b);

    printf ("enter a no ");
    scanf("%d", &c);

    if (a>b && a>c)
        printf("%d is greatest",a);

    else if (a<b && b>c)
        printf("%d is greatest",b);

    else if (c>a && b<c)
        printf("%d is greatest",c);
}
