#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the total marks percentage");
    scanf("%d", &marks);


    if (marks>=75)
        printf("FIRST DIVISION");

    else if (marks<75 && marks >65)
        printf("SECOND DIVISION");

        else if (marks<65&& marks>=55)
        printf("THIRD DIVISION");

        else if (marks<55)
        printf("FOURTH DIVISION");
}
