#include<stdio.h>
void main()
{
    int c=0;
    while (c!=-1)
    {
            printf("\n Enter the choice to display pattern (-1 to exit)\n=> ");
        scanf("%d",&c);

        if (c==1)
        {
            printf("-----------\n-         -\n-         -\n-----------\n");
        }
        if (c==2)
        {
            printf("*********\n*      * \n*      * \n*********\n");
        }
        if (c==3)
        {
            printf("++++++\n+    +\n+    +\n++++++ \n");
        }

        if (c==4)
        {
            printf("======\n|     |\n|     |\n======");
        }
        if (c==5)
        {
            printf("   \\/   \n   \\/   \n   /\\   \n   /\\    ");
        }

        if (c==6)
        {
            printf("@    @\n  #   \n ====\n");
        }
        if (c==7)
        {
            printf("%%%%*%%%% \n%%%%,%%%% \n )/( \n |/|\n (_)");
        }
    }
}


