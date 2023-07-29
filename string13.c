#include<stdio.h>
void main()
{
    char a[20],temp;
    int i,j;
    printf("Enter a string :- ");
    gets(a);
    for(j=0;a[j+1];j++)
    {
        for(i=0;a[i+1];i++)
        {
           if(a[i+1]<a[i])
           {
               temp=a[i+1];
               a[i+1]=a[i];
               a[i]=temp;
           }
        }
    }
    puts(a);
}



