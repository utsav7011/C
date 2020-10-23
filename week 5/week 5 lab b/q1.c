#include<math.h>
#include<stdio.h>
void main()
{
    int a=0,b=0,c=0;
    float D,d1,d2;

    printf("Enter the value of coefficient of x^2 ");
    scanf("%d",&a);

    printf("Enter the value of coefficient of x ");
    scanf("%d",&b);

    printf("Enter the value of constant term ");
    scanf("%d",&c);

    D=(b*b)-(4*a*c);

    if (D<0)
        {
            printf("THE ROOTHS OF THE EQUATION %dx^2 + %dx + %d ARE NOT POSSIBLE", a,b,c);
            exit (0);
        }

    d1=(-b+sqrt(D))/(2*a);
    d2=(-b-sqrt(D))/(2*a);


     if (b<0)
        printf("the roots of the equation %dx^2  %dx + %d are %0.2f and %0.2f ", a,b,c,d1,d2);

    else if (c<0)
        printf("the roots of the equation %dx^2+%dx %d are %0.2f and %0.2f ", a,b,c,d1,d2);

    else printf("the roots of the equation %dx^2 + %dx + %d are %0.2f and %0.2f ", a,b,c,d1,d2);

    if (D==0)
        printf("\n the roots are equal");


}
