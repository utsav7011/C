#include<stdio.h>
// to do to do to do to do to do ussing operators
void main()
{
    int a=0,b=1;
    printf("logical table of AND:-  \n \n \n");
    printf("\n a    n   a && b");
    printf("\n %d    %d     %d",a,a,a&&a);
    printf("\n %d    %d     %d",a,b,a&&b);
    printf("\n %d    %d     %d",b,a,a&&b);
    printf("\n %d    %d     %d",b,b,b&&b);

    printf("\n \n \n logical table of OR:-  \n \n \n");
    printf("\n a    n   a or b");
    printf("\n %d    %d     %d",a,a,a||a);
    printf("\n %d    %d     %d",a,b,b||a);
    printf("\n %d    %d     %d",b,a,b||a);
    printf("\n %d    %d     %d",b,b,b||b);

    printf("\n \n \n logical table of NOT:-  \n \n \n");
    printf("\n   a    ~a  ");
    printf("\n ~ %d    %d",a,!a);
    printf("\n ~ %d    %d \n \n \n ",b,!a);


}
