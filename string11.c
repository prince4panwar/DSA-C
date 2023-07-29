#include<stdio.h>
int main()
{
    char a[20];
    int i,num=0;
    printf("Enter a string :- ");
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]==' ')
            num++;
    }
    printf("Number of spaces in the string is %d",num);
}
