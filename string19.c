#include<stdio.h>
void main()
{
    char a[100],temp;
    int i,j,count=0;
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
    i=0;
    j=0;
    while(a[i]!='\0')
    {
        while(a[i]==a[j])
        {
            count++;
            j++;
        }
        printf("\nNumber of frequency of %c is %d",a[i],count);
        count=0;
        i=j;
    }
}

