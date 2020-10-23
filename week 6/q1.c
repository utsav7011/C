#include<stdio.h>
void main()
{
    int c, no;
    printf("Enetr a no");
    scanf("%d",&no);

    switch (no>0)
    {
    case 1:
        {
            printf("%d no is positive", no);
        }break;
    case 0 :
        {// condition ofr negative
            switch (no<0)
            {
            case 1:
                {
                    printf("%d is negative",no);
                }break;
            case 0:
                {
                    printf("%d is zero value", no);
                }break;
            }
        }

}
}
