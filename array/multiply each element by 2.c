#include<stdio.h>
void mul2(int size, int arr[]);
void main()
{
    int i=0,arr[100], n=0;
    printf("THE NO OF ELEMENTS TO BEENTERED IS => ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("THE ELEMENT %d is ", i+1);
        scanf("%d", &arr[i]);

    }
    mul2(n,arr);
}

void mul2(int size, int arr[])
{
    int i=0;
    for (i=0;i<size;i++)
    {
        arr[i]=arr[i]*2;
    }
    printf("\n THE UPDATED VALUES ARE/IS :- \n");
    for (i=0;i<size;i++)
    {
        printf("\nTHE ELEMENTS %d is %d", i+1, arr[i]);

    }

}
