#include<stdio.h>
void main()
{
    char a[100],b,c;
    int i=0;
    printf("Enter a string :- ");
    gets(a);
    printf("Enter a character :- ");
    fflush(stdin);
    scanf("%c",&b);
    printf("Enter a character that you want to replace :- ");
    fflush(stdin);
    scanf("%c",&c);
    for(i=0;a[i];i++)
    {
        if(a[i]==b)
        {
            a[i]=c;
            break;
        }
    }
    if(a[i]=='\0')
    {
        printf("There is no such character");
    }
    puts(a);
}
