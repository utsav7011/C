#include<stdio.h>
double avg(int arr[], int size);
void main()
{
    int arr[100],size,i, sum=0;
    printf("No of elements to be entered => ");
    scanf("%d",&size);
    for (i=0;i<size;i++)
    {
        printf("\n Enter the element no %d => " , i+1);
        scanf("%d", &arr[i]);

    }
    aveg(arr,size);
}

void aveg (int arr[ ], int size)
{
    int sum=0;
    int i=0;
    double avg=0;
    printf("\n the size is %d", size);

    for (i=0;i<size;i++)
    {
        sum=sum+arr[i];

    }
    printf("\n the sum is %d", sum);
    avg = (sum/size) ;
    printf("\n THE AVERAGE OF ENETRED ELEMENTS IS => %0.3lf", avg);

}
