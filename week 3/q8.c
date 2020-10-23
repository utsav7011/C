#include<stdio.h>
#include<math.h>
void main()
{
    float x1=0,y1=0,x2=0,y2=0,d1=0,d2=0,d3=0,D1,D2,D3,x3,y3;

    printf("enter the value of x coordinate of first point");
    scanf("%f",&x1);

    printf("enter the value of y coordinate of first point");
    scanf("%f",&y1);

    printf("enter the value of x coordinate of second point");
    scanf("%f",&x2);

    printf("enter the value of y coordinate of second point");
    scanf("%f",&y2);

    printf("enter the value of y coordinate of second point");
    scanf("%f",&x3);

    printf("enter the value of y coordinate of second point");
    scanf("%f",&y3);

    printf("the points entere are P1 (  %f  ,  %f  ) ,  P2 (  %f  ,  %f  ), P3 (  %f  ,  %f  )",x1,y1,x2,y2,x3,y3);

    D1 = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    D2 = ((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
    D3 = ((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3));


    printf("\n \n \n the distance between P1 and P2 is %f", D1);
    printf("\nthe distance is between P2 and P3 is %f", D2);
    printf("\nthe distance is between P1 and P3 is %f", D3);

}
