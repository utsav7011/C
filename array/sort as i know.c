#include<stdio.h>
void main()
{
    int i=0,j=0,arr[100], n, temp;
    printf("Enter the no of Entries");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("ENTER THE %d entry", i+1);
        scanf("%d", &arr[i]);
    }

    for (i=0;i<n;i++)
    {
        for (i=0;i<n-1;i.++)
        {
            if (arr[i+1]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }

    }
    for (i=0;i<n;i++)
    {
        printf(" \n THE %d entry is => %d ", i+1, arr[i]);
    }

}
