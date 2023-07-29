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
    }
    a[0]=a[0]-32;
    for(i=1;a[i];i++)
    {
        if(a[i]==' ')
            a[i+1]=a[i+1]-32;
    }
    puts(a);
}


