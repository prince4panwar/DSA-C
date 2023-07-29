#include<stdio.h>
void main()
{
    char a[20],temp;
    int i;
    printf("Enter a string :- ");
    gets(a);
    printf("Enter a character that you want to delete from the string :- ");
    scanf("%c",&temp);
    for(i=0;a[i];i++)
    {
        if(a[i]==temp)
           break;
    }
    if(a[i]=='\0')
    {
        printf("There is no such character in the string");
    }
    else
    {
        while(a[i])
        {
           a[i]=a[i+1];
           i++;
        }
        puts(a);
    }
}
