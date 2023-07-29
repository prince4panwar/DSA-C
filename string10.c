#include<stdio.h>
int main()
{
    char a[20],b,c;
    int i;
    printf("Enter a first string  :- ");
    gets(a);
    printf("Enter a character of a string :- ");
    scanf("%c",&b);
    printf("Enter a character that you want to replace :- ");
    fflush(stdin);
    scanf("%c",&c);
    for(i=0;a[i];i++)
    {
        if(a[i]==b)
            a[i]=c;
    }
    puts(a);
}

