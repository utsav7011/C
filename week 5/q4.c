#include<stdio.h>
void main()
{
    int age;
    printf("ENTER THE Age");
    scanf("%d",&age);
    if (age <18)
        printf("the person is not suitable for job");

    else if (age>=18 && age <=66)
        printf("the person is suitable for job");

    else if (age >66)
        printf("the person is not suitable for job");
}
