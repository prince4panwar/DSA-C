#include<stdio.h>
int main()
{
    int i,j;
    char a[20],temp;
    printf("Enter a sting :- ");
    gets(a);
    puts(a);
    for(i=0;a[i];i++)
    {
        if(a[i]>=97&&a[i]<=122)
            a[i]=a[i]-32;
    }
    puts(a);
}

