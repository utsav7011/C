#include<stdio.h>
void main()
{
    char n;
    int c;
    printf("Enter the character => ");
    scanf("%c",&n);

    printf("1. to convert to small or to capital \n2. to print ASCII value \n3. to check for type \nEnter the choice => ");
    scanf("%d",&c);


    switch(c)
    {
    case 1:
        {
            // CONVERSION
            if (n> 65 && n <90)
            {
                n=n+32;
            printf("the converted value is %c", n);
            }

            else if (n>96 && n <123)
            {
            // convert to small
            n-=32;
            printf("the converted value is %c", n);
            }
            else printf("YOUVE ENTERED A SPECIAL CHARACTER SO NO CONVERSION POSSIBLE");
        } break;
    case 2:
        {
            // print ascii value
            printf("the ASCII VALUE OF %c is %d", n,n);
        }break;
    case 3:
                { // check char
                    if (n> 65 && n <90)
                        printf("%c is a capital character", n);
                    else if (n>96 && n <123)
                    {
                        printf("%c is a small character", n);
                    }
                    else if (n>47 && n<58)
                    {
                        printf("%c is a digit", n);
                    }
                    else printf("YOUVE ENTERED A SPECIAL CHARACTER");
                }break;
        default : printf("YOUVE ENTERED A wrong choice");
    }
}
