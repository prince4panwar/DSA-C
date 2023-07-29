#include<stdio.h>
int main()
{
    char a[10],b[10],c[20];
    int i,j;
    printf("Enter a first string  :- ");
    gets(a);
    printf("Enter a second string :- ");
    gets(b);
    for(i=0;a[i];i++)
    {
        c[i]=a[i];
    }
    for(j=0;b[j];j++)
    {
        c[i]=b[j];
        i++;
    }
    c[i]='\0';
    printf("%s",c);
}
