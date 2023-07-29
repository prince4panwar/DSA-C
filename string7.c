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
        if(a[i]>='A'&&a[i]<='Z')
            a[i]=a[i]+32;
        else if(a[i]>='a'&&a[i]<='z')
            a[i]=a[i]-32;
    }
    puts(a);
}


