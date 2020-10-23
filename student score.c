#include<stdio.h>
void main()
{
    int q1,q2,q3,q4,m1,m2,f,q,m;
    float qavg,mavg,favg;


    printf("************ENTRIES SECTION************");
    printf("\n \n the marks in quiz 1 is :- ");
    scanf("%d",&q1);

    printf("the marks in quiz 2 is :- ");
    scanf("%d",&q2);

    printf("the marks in quiz 3 is :- ");
    scanf("%d",&q3);

    printf("the marks in quiz 4 is :- ");
    scanf("%d",&q4);
    q=q1+q2+q3+q4;
    qavg=(q*0.3)/400;

    printf("the marks in mid term  1 :- ");
    scanf("%d",&m1);

    printf("the marks in midterm2 :- ");
    scanf("%d",&m2);

    m=m1+m2;
    mavg=(m*0.4)/200;

    printf("the marks in final is :- ");
    scanf("%d",&f);

    favg=(f*0.3)/100;

    float t;

    t=qavg+mavg+favg;

    printf("************RESULT OUTPUT************");
    printf("\n quiz 1 => %d", q1);
    printf("\n quiz 2 => %d", q2);
    printf("\n quiz 3 => %d",q3);
    printf("\n quiz 4 => %d",q4);
    printf("\n quiz total => %d",q);

    printf("\n \n mid term 1 => %d",m1);
    printf("\n mid term 2 => %d",m2);
    printf("\n mid term total => %d",m);

    printf("\n fianl exam marks => %d",f);

    printf("\n \n ************************************************************");
    printf("\n quiz percentage => %0.2f",qavg*100);
    printf("\n midterm  percentage => %0.2f",mavg*100);
    printf("\n fianl exam percentage => %0.2f",favg*100);
    printf("\n total percentage =>  %0.2f",t*100);






}
