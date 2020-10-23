#include<stdio.h>
void main()
{
    int x=0;int y=0; int z=1;
if (x)
    if (y)
        if (z)
            z=3;
        else z=2;
printf("\n %d %d %d",x,y,z);

if (z=y)
    {
        y++;
        z--;
        printf("\n %d %d" , y,z);
    }
    else --x;
    printf("\n %d %d %d",x,y,z);
}
