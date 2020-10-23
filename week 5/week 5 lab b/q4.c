#include<ctype.h>
#include<stdio.h>
void main()
{
    char a;

    printf ("enter a character :- ");
    scanf("%c",&a);

    if (isalpha(a))
    {
        printf("This is an alphabet");
    }

    else if (isdigit(a))
    {
        printf("This is a digit");
    }

    else printf("the character is a special character");

}
