#include<stdio.H>
void main()
{
    float temp=0;
    printf("Enter the Temprature => ");
    scanf("%f", &temp);

    if (temp<0)
        printf("FREEZING WEAHER");

    else if (temp>=0 && temp <=10)
        printf("VERY COLD WEATHER");

    else if (temp>10 && temp <=20)
        printf("COLD WEATHER");

    else if (temp>20 && temp <=30)
        printf("NORMAL IN WEATHER");

    else if (temp>30 && temp <=40)
        printf("ITS HOT");

    else if (temp>40)
        printf("VERY HOT");
}
