#include<stdio.h>
void main()
{
    char a[20],b[20];
    int i,j,k;
    printf("Enter first string  :- ");
    gets(a);
    printf("Enter second string :- ");
    gets(b);
    for(i=0;a[i];i++){}
    for(j=0;b[j];j++){}
    if(i==j)
    {
        for(k=0;a[k];k++)
        {
            if(a[k]!=b[k])
            {
                printf("Both the strings are not same");
                break;
            }
        }
        if(k==i)
        {
            printf("Both the strings are same");
        }

    }
    else
    {
        printf("Both the strings are not same");
    }

}
