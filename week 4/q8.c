
#include<stdio.h>
void main()
{
    int cs,ssc,m,e,h,t;
    float avg;
    printf ("enter marks in computer science ");
    scanf("%d", &cs);

    printf ("enter marks in social science ");
    scanf("%d", &ssc);

    printf ("enter marks in maths ");
    scanf("%d", &m);

    printf ("enter marks in english ");
    scanf("%d", &e);

    printf ("enter marks in hindi ");
    scanf("%d", &h);

    t=cs+ssc+e+h+m;

    avg=t/5;

    if (avg>=90)
        printf("grade is A");

    if (avg<90 &&avg >=80)
        printf("grade is B");

    if (avg<80 &&avg >=70)
        printf("grade is C");

    if (avg<70 &&avg >=60)
        printf("grade is D");

    if (avg<60 && avg >=40)
        printf("grade is E");

    if (avg<40)
        printf("grade is F");


}
