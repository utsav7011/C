#include<stdio.h>
void selectionsort(int list[], int last)
{
    // variable declaration
    int smallest;
    int tempdata;
    // outer loop
    for (int current=0;current<last;current++)
    {
        smallest=current;
        // inner loop
        for (int walk=current+1;walk<=last;walk++)
        {
            if (list[walk]<list[current] )
                smallest=current;
            // smallest selected exchange with current
            tempdata=list[current];
            list[current]=list[smallest];
            list[smallest]=tempdata;
        }//for current
    }
    int i=0;
}
        for (i=0;i<last;i++)
    {
        printf(" \n THE %d entry is => %d ", i+1, list[i]);
    }
void main ()
{
    int list[100],i=0,n=0;
    printf("Enter the no of enteries => ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("ENTER THE %d entry", i+1);
        scanf("%d", &list[i]);
    }
    selectionsort(list,n);
}

