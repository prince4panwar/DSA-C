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
    }
    for(j=0;j<i/2;j++)
    {
        temp=a[j];
        a[j]=a[i-j-1];
        a[i-j-1]=temp;
    }
    puts(a);
}
