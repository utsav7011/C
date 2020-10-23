#include<stdio.h>
void main()
{
    int n;
    int arr[100],i,line=1;

    printf("Enter the no of values => ");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("Enter the %d value from (0 to 20) => ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The values entered are :- \n");
    for (i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
        line++;
        if (line>5)
        {
            printf("\n");
            line=1;
        }
    }
    int temp[20]={0},fre=0;
    for (i=0;i<n;i++)
    {
        if (arr[i]==0)
            temp[fre]++;

        if (arr[i]==1)
            temp[fre+1]++;

        if (arr[i]==2)
            temp[fre+2]++;

        if (arr[i]==3)
            temp[fre+3]++;

        if (arr[i]==4)
            temp[fre+4]++;

        if (arr[i]==5)
            temp[fre+5]++;

        if (arr[i]==6)
            temp[fre+6]++;

        if (arr[i]==7)
            temp[fre+7]++;

        if (arr[i]==8)
            temp[fre+8]++;

        if (arr[i]==9)
            temp[fre+9]++;

        if (arr[i]==10)
            temp[fre+10]++;

        if (arr[i]==11)
            temp[fre+11]++;

        if (arr[i]==12)
            temp[fre+12]++;

        if (arr[i]==13)
            temp[fre+13]++;

        if (arr[i]==14)
            temp[fre+14]++;

        if (arr[i]==15)
            temp[fre+15]++;

        if (arr[i]==16)
            temp[fre+16]++;

        if (arr[i]==17)
            temp[fre+17]++;

        if (arr[i]==18)
            temp[fre+18]++;

        if (arr[i]==19)
            temp[19]++;

        if (arr[i]==20)
            temp[fre+20]++;
    }
    fre=0;
    int j=0;

    printf("\n ================= OUTPUT ================= \n");
    for (i=0;i<20;i++)
    {
        printf("%d ", i);
        if (temp[fre]!=0)
        {
            for (j=0;j<temp[fre];j++)
            {
                printf("*");
            }
        }
         printf("\n");
        fre++;
    }
}
