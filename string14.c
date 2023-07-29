#include<stdio.h>
void main()
{
    char a[20],b[20];
    int i,j;
    printf("Enter a string :- ");
    gets(a);
    for(j=0;a[j];j++){}
    for(i=0;i<j;i++)
    {
        b[i]=a[j-i-1];
    }
    b[i]='\0';
    puts(b);
}
