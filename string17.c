
#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j=0,k=0,count=1;
    printf("Enter a string :-");
    gets(a);
    for(i=0;a[i];i++){}
    while(j<i)
    {
        while(a[j]==' '&&a[j]!='\0')
            j++;
        while(a[j]!=' '&&a[j]!='\0')
        {
            b[k]=a[j];
            k++;
            j++;
        }
        b[k]=a[j];
        k++;
        while(a[j]==' '&&a[j]!='\0')
                j++;
    }
    if(b[k-1]==' ')
       b[k-1]='\0';
    else
        b[k]='\0';
    for(i=0;b[i];i++)
    {
        if(b[i]==' ')
            count++;
    }
    if(i==0)
        printf("No words in the string");
    else
        printf("%d words are in the string",count);
}
